FROM ubuntu:latest AS init

RUN apt-get update
RUN apt-get install python -y
RUN apt-get install python3-pip -y
RUN apt-get install git -y
RUN pip install platformio
RUN platformio platform install --with-package=framework-espidf \
    --with-package=toolchain-xtensa32 \
    --with-package=tool-cmake \
    --with-package=tool-esptoolpy \
    --with-package=tool-idf \
    --with-package=tool-ninja \
      espressif32

# COPY . /project
# WORKDIR /project


# FROM init AS build

# RUN --mount=type=cache,target=/root/.platformio --mount=type=cache,target=/project/.pio pio run

# FROM init AS clean
# RUN pio run --target clean