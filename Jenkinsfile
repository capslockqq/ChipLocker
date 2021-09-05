pipeline {
    agent { 
        dockerfile {
            args '-t build'
        } 
    }
    stages {
        stage("build") {
            steps {
                sh "ls"
                sh "pio run -e env:esp32doit-devkit-v1"
            }
        }
    }
}