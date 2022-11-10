FROM debian:bullseye-slim

# VARIANT can be either 'hugo' for the standard version or 'hugo_extended' for the extended version.
ARG USERNAME=Hattomo
ARG USER_UID=1000
ARG USER_GID=$USER_UID
ENV LANG=C.UTF-8
ENV TZ=Asia/Tokyo

# https://code.visualstudio.com/remote/advancedcontainers/add-nonroot-user#_change-the-uidgid-of-an-existing-container-user
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    #
    # [Optional] Add sudo support. Omit if you don't need to install software after connecting.
    && apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME

# Download Hugo
RUN apt-get update && apt-get install -y ca-certificates openssl git curl wget less nano sudo pip && rm -rf /var/lib/apt/lists/*

# RUN groupmod --gid $USER_GID $USERNAME \
#     && usermod --uid $USER_UID --gid $USER_GID $USERNAME \
#     && chown -R $USER_UID:$USER_GID /home/$USERNAME

User ${USERNAME}


# [Optional] Uncomment this section to install additional OS packages you may want.
#
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>

# [Optional] Uncomment if you want to install more global node packages
# RUN sudo -u node npm install -g <your-package-list-here>
