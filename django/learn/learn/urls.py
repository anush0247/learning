from django.conf.urls import patterns, include, url

from django.contrib import admin
admin.autodiscover()

#from app1.views import cur_time

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'learn.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),
	# url(r'^time/',cur_time),
	url(r'^app1/',include('app1.urls')),
    url(r'^admin/', include(admin.site.urls)),
)
