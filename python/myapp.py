import flask,flask.views
import os

app = flask.Flask(__name__)

#Don't do this
app.secret_key = "bacon"

class View(flask.views.MethodView) :
 def get(self):
  return flask.render_template('index.html')

 def post(self):
#   flask.flash(eval(flask.request.form['expression']))
   result = eval(flask.request.form['expression'])
   flask.flash(result)
   return self.get()
#  return "Works!"

 

app.add_url_rule('/',view_func=View.as_view('main'),methods = ['GET','POST'])




app.debug = True
app.run()
