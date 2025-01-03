## Type command
``` django-admin startproject myproject ```


## Go to myproject
``` cd myproject ```

``` python3 manage.py startapp myapp ```


## Add ```myapp``` to the INSTALLED_APPS list in ```settings.py```:
```Python
INSTALLED_APPS = [
    # other apps
    'myapp',
]
```


### Create a folder ```templates``` inside ```myapp/```


## Create a file ```static_page.html``` inside ```myapp/templetes/```
``` html
<!DOCTYPE html>
<html>
<head>
    <title>Static Page</title>
</head>
<body>
    <h1>This is a Static Page</h1>
    <p>This content does not change dynamically.</p>
</body>
</html>
```


## Edit ```myapp/views.py```

``` Python
from django.shortcuts import render

def static_page(request):
    return render(request, 'static_page.html')
```


## Create ```urls.py``` in ```myapp/```
```Python
from django.urls import path
from .views import static_page  # Import the static_page view from views.py

urlpatterns = [
    path('static/', static_page, name='static_page'),  
    # Map the /static/ URL to the static_page view
]
```


## Edit ```urls.py``` in ```myproject/```
```Python
from django.contrib import admin
from django.urls import path
from myapp.views import static_page

urlpatterns = [
    path('', static_page, name='home'),  # Serve the static page at the root
    path('admin/', admin.site.urls),
]

```


## Adjust ```settings.py``` for ```myproject/```
```Python
import os

TEMPLATES = [
    {
        'BACKEND': 'django.template.backends.django.DjangoTemplates',
        'DIRS': [os.path.join(BASE_DIR, 'templates')],
        'APP_DIRS': True,
        'OPTIONS': {
            'context_processors': [
                'django.template.context_processors.debug',
                'django.template.context_processors.request',
                'django.contrib.auth.context_processors.auth',
                'django.contrib.messages.context_processors.messages',
            ],
        },
    },
]

```


## Run the App
```
python3 manage.py runserver
```


## Open your browser and visit
http://127.0.0.1:8000/
