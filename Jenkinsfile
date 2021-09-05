pipeline {
    agent { dockerfile true }
    stages {
        stage("build") {
            steps {
                sh "pio run -e env:esp32doit-devkit-v1"
            }
        }
    }
}