pipeline {
    agent any
    stages {
        stage("build") {
            environment {
                PATH="$PATH:/home/ubuntu/.platformio/penv/bin"
            }
            steps {
                sh "pio run -e env:esp32doit-devkit-v1"
            }
        }
    }
}