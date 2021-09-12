FROM ubuntu:latest AS init

RUN apt update && apt upgrade -y
RUN apt install python -y && apt install python3-pip -y && apt install git -y
RUN pip install platformio
RUN platformio platform install --with-package=framework-espidf \
--with-package=toolchain-esp32ulp \
--with-package=toolchain-xtensa32 \
--with-package=tool-cmake \
--with-package=tool-esptoolpy \
--with-package=tool-idf \
--with-package=tool-ninja \
espressif32

WORKDIR /root/.platformio/platforms/espressif32/examples/espidf-blink/

RUN pio run

COPY . /project 
WORKDIR /project
