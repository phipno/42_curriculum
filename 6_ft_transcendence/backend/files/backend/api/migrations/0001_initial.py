# Generated by Django 4.2.7 on 2024-05-03 15:30

from django.conf import settings
import django.contrib.auth.models
import django.contrib.auth.validators
import django.core.validators
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='CustomUser',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('password', models.CharField(max_length=128, verbose_name='password')),
                ('last_login', models.DateTimeField(blank=True, null=True, verbose_name='last login')),
                ('is_superuser', models.BooleanField(default=False, help_text='Designates that this user has all permissions without explicitly assigning them.', verbose_name='superuser status')),
                ('username', models.CharField(error_messages={'unique': 'A user with that username already exists.'}, help_text='Required. 150 characters or fewer. Letters, digits and @/./+/-/_ only.', max_length=150, unique=True, validators=[django.contrib.auth.validators.UnicodeUsernameValidator()], verbose_name='username')),
                ('first_name', models.CharField(blank=True, max_length=150, verbose_name='first name')),
                ('last_name', models.CharField(blank=True, max_length=150, verbose_name='last name')),
                ('email', models.EmailField(blank=True, max_length=254, verbose_name='email address')),
                ('is_staff', models.BooleanField(default=False, help_text='Designates whether the user can log into this admin site.', verbose_name='staff status')),
                ('is_active', models.BooleanField(default=True, help_text='Designates whether this user should be treated as active. Unselect this instead of deleting accounts.', verbose_name='active')),
                ('chat_online', models.BooleanField(default=False)),
                ('profile_pic', models.FileField(blank=True, default='profilepic/default.jpeg', null=True, upload_to='profilepic', validators=[django.core.validators.FileExtensionValidator(allowed_extensions=['jpeg', 'png'])])),
                ('alias', models.CharField(blank=True, max_length=150, null=True, verbose_name='Alias')),
                ('is_42_login', models.BooleanField(default=False)),
                ('num_games_played', models.IntegerField(default=0)),
                ('num_games_won', models.IntegerField(default=0)),
                ('mmr', models.IntegerField(default=200)),
                ('ranking', models.IntegerField(default=0)),
                ('date_joined', models.DateTimeField(auto_now_add=True)),
                ('map', models.TextField(blank=True)),
                ('sound', models.BooleanField(default=False)),
                ('enabled_2fa', models.BooleanField(default=False)),
                ('blocked_users', models.ManyToManyField(blank=True, related_name='blocked_by_users', to=settings.AUTH_USER_MODEL)),
                ('friends', models.ManyToManyField(blank=True, to=settings.AUTH_USER_MODEL)),
                ('friends_requests', models.ManyToManyField(blank=True, related_name='friend_requests_received', to=settings.AUTH_USER_MODEL)),
            ],
            options={
                'verbose_name': 'user',
                'verbose_name_plural': 'users',
                'abstract': False,
            },
            managers=[
                ('objects', django.contrib.auth.models.UserManager()),
            ],
        ),
    ]