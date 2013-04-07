from flask import Flask
app = Flask(__name__)

@app.route('/')
def index():
 return 'Index Page'

@app.route('/hello')
def hello():
 return "Niranjan Singh is good for health." 

if __name__ == "__main__":
 app.debug = True
 app.run('0.0.0.0')
