FROM intel/intel-optimized-pytorch:1.12.100
# https://intel.github.io/intel-extension-for-pytorch/cpu/latest/tutorials/installation.html

#ENV http_proxy=
#ENV https_proxy=
#ENV no_proxy="127.0.0.1,localhost,.svc,.pod,.cluster.local,.svc.cluster.local"
RUN apt-get update
RUN apt-get install python3-venv git -y
# RUN python3 -m pip install torch==1.12.0+cpu torchvision==0.13.0+cpu -f https://download.pytorch.org/whl/torch_stable.html

WORKDIR /home
RUN python3 -m pip install --upgrade pip
RUN python3 -m venv pytorch_env
RUN . /home/pytorch_env/bin/activate
# libs for cv2
# RUN apt-get install ffmpeg libsm6 libxext6 -y

# RUN git clone --branch coldstart https://github.com/chzhyang/faas-workloads.git
# WORKDIR /home/faas-workloads/pytorch_image_recognition
COPY data /home/data
COPY model /home/model
COPY requirements.txt /home/requirements.txt
COPY func.py /home/func.py
RUN pip install -r requirements.txt
RUN git clone -b coldstartup https://github.com/chzhyang/parliament.git

# Run the web service on container startup.
CMD exec python3 -m parliament.parliament .
