From debian:bullseye

ENV LANG=C.UTF-8
ENV TZ=Asia/Tokyo

RUN DEBIAN_FRONTEND=noninteractive && apt-get update && apt-get -y install --no-install-recommends ca-certificates openssl git curl sudo bash bash-completion less nano build-essential python3 python3-pip && \
     rm -rf /var/lib/apt/lists/*

WORKDIR /workspace
CMD ["bash"]
