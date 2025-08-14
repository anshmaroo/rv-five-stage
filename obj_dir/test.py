import os
import struct
import subprocess

tests_dir = "tests"
output_file = "test.hex"

for filename in os.listdir(tests_dir):
    if filename.endswith(".bin"):
        filepath = os.path.join(tests_dir, filename)
        print(f"testing {filename}")

        with open(filepath, "rb") as f, open(output_file, "w") as out:
            while chunk := f.read(4):
                word = struct.unpack("<I", chunk.ljust(4, b'\x00'))[0]
                out.write(f"{word:08x}\n")

        subprocess.run(["./VPipeline"], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)