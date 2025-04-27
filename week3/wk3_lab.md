<detail> 

<summary> # Lab: Using GitHub Codespaces to Analyze Log Files with grep</summary>
# Objective

# In this lab, you will:
	•	You will use your GitHub Codespace 
	•	Download sample log files
	•	Use the grep command to search and filter text in the logs
</detail>
# Instructions:
Login to your codespace
In the Codespace terminal, run the following:

# Create a directory for logs
mkdir logs
cd logs

# Download some sample log files
```ruby
curl -O https://raw.githubusercontent.com/elastic/examples/master/Common%20Data%20Formats/nginx_logs/nginx_logs
curl -O https://raw.githubusercontent.com/martenson/discogs-logs/master/sample.log
curl -O https://raw.githubusercontent.com/elastic/examples/master/Common%20Data%20Formats/apache_logs/apache_logs
```
Check the files:
```ruby
ls -l
```
You should see three files:
	•	nginx_logs
	•	sample.log
	•	apache_logs
# Part 3: Use grep to Search Log Files

Try the following tasks:

## Task 1: Find all lines that contain the word “error”
```ruby
grep "error" nginx_logs
```
## Task 2: Find all lines that contain an IP address (e.g., “192.168.”)
```ruby
grep "192\.168\." nginx_logs
```
(Note: We escape the dot . because otherwise it means “any character”.)

## Task 3: Find all HTTP 404 errors in Apache logs
```ruby
grep " 404 " apache_logs
```
## Task 4: Find all access logs from a specific date (e.g., 17/May/2015)
```ruby
grep "17/May/2015" apache_logs
```ruby
## Task 5: (Challenge) Show line numbers with matches

```ruby
grep -n "error" nginx_logs
```
## Part 4: Bonus Exercises
	•	Use grep -i to make the search case insensitive:

```ruby
grep -i "error" sample.log
````
	•	Use grep -v to show all lines NOT containing a word:

```ruby
grep -v "GET" nginx_logs
```
# Submission
Take a screenshot of:
	•	Your terminal showing the downloaded logs
	•	Some grep commands and their results

Upload the screenshots to your GitHub repo in a folder called lab-results/ and push it!
End of Lab

