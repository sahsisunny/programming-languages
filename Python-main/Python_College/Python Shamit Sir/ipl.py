#!/usr/bin/env python
# coding: utf-8

# In[1]:


# loading the required libraries
import pandas as pd
from matplotlib import pyplot as plt

# In[2]:


# loading the ipl matches dataset
ipl = pd.read_csv('matches.csv')

# In[3]:


# having a glance at the first five records of the dataset
ipl.head()

# In[4]:


# Lookin at the number of rows and columns in the dataset
ipl.shape

# In[5]:


# Getting the frequency of most man of the match awards
ipl['player_of_match'].value_counts()

# In[6]:


# Getting the top 10 players with most man of the match awards
ipl['player_of_match'].value_counts()[0:10]

# In[7]:


# Getting the top 5 players with most man of the match awards
ipl['player_of_match'].value_counts()[0:5]

# In[8]:


list(ipl['player_of_match'].value_counts()[0:5].keys())

# In[9]:


# making a bar-plot for the top 5 players with most man of the match awards
plt.figure(figsize=(8, 5))
plt.bar(list(ipl['player_of_match'].value_counts()[0:5].keys()), list(ipl['player_of_match'].value_counts()[0:5]),
        color="g")
plt.show()

# In[10]:


# Getting the frequency of result column
ipl['result'].value_counts()

# In[11]:


# Finding out the number of toss wins w.r.t each team
ipl['toss_winner'].value_counts()

# In[12]:


# Extracting the records where a team won batting first
batting_first = ipl[ipl['win_by_runs'] != 0]

# In[13]:


# Looking at the head
batting_first.head()

# In[14]:


# Making a histogram
plt.figure(figsize=(7, 7))
plt.hist(batting_first['win_by_runs'])
plt.title("Distribution of Runs")
plt.xlabel("Runs")
plt.show()

# In[ ]:


# Finding out the number of wins w.r.t each team after batting first
batting_first['winner'].value_counts().keys()

# In[ ]:


# Making a bar-plot for top 3 teams with most wins after batting first
plt.figure(figsize=(7, 7))
plt.bar(list(batting_first['winner'].value_counts()[0:3].keys()), list(batting_first['winner'].value_counts()[0:3]),
        color=["blue", "yellow", "orange"])
plt.show()

# In[ ]:


# In[ ]:


# Making a pie chart
plt.figure(figsize=(7, 7))
plt.pie(list(batting_first['winner'].value_counts()), labels=list(batting_first['winner'].value_counts().keys()),
        autopct='%0.1f%%')
plt.show()

# In[ ]:


# extracting those records where a team has won after batting second
batting_second = ipl[ipl['win_by_wickets'] != 0]

# In[ ]:


# looking at the head
batting_second.head()

# In[ ]:


# Making a histogram for frequency of wins w.r.t number of wickets
plt.figure(figsize=(7, 7))
plt.hist(batting_second['win_by_wickets'], bins=3)
plt.show()

# In[ ]:


# Finding out the frequency of number of wins w.r.t each time after batting second
batting_second['winner'].value_counts()

# In[ ]:


# Making a bar plot for top-3 teams with most wins after batting second
plt.figure(figsize=(7, 7))
plt.bar(list(batting_second['winner'].value_counts()[0:3].keys()), list(batting_second['winner'].value_counts()[0:3]),
        color=["purple", "blue", "red"])
plt.show()

# In[ ]:


# Making a pie chart for distribution of most wins after batting second
plt.figure(figsize=(7, 7))
plt.pie(list(batting_second['winner'].value_counts()), labels=list(batting_second['winner'].value_counts().keys()),
        autopct='%0.1f%%')
plt.show()

# In[ ]:


# Looking at the number of matches played each season
ipl['season'].value_counts()

# In[ ]:


# Looking at the number of matches played in each city
ipl['city'].value_counts()

# In[ ]:


# Finding out how many times a team has won the match after winning the toss
import numpy as np

np.sum(ipl['toss_winner'] == ipl['winner'])

# In[ ]:


325 / 636

# In[ ]:


deliveries = pd.read_csv('deliveries.csv')

# In[ ]:


deliveries.head()

# In[ ]:


deliveries['match_id'].unique()

# In[ ]:


match_1 = deliveries[deliveries['match_id'] == 1]

# In[ ]:


match_1.head()

# In[ ]:


match_1.shape

# In[ ]:


srh = match_1[match_1['inning'] == 1]

# In[ ]:


srh['batsman_runs'].value_counts()

# In[ ]:


srh['dismissal_kind'].value_counts()

# In[ ]:


rcb = match_1[match_1['inning'] == 2]

# In[ ]:


rcb['batsman_runs'].value_counts()

# In[ ]:


rcb['dismissal_kind'].value_counts()

# In[ ]:
