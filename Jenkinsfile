pipeline {
    agent {dockerfile true}
    stages {
        stage("build") {
            steps {
                sh "ls"
                sh "pio run -e env:esp32doit-devkit-v1"
            }
        }
    }
}