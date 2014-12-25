from django.conf.urls import patterns, include, url

from views import cur_time

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'learn.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),
	url(r'time/', cur_time),
    
)
