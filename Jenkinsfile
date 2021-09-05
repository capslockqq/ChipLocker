pipeline {
    agent any
    stages {
        agent { dockerfile true }
        stage("build") {
            steps {
                sh "pio run -e env:esp32doit-devkit-v1"
            }
        }
    }
}