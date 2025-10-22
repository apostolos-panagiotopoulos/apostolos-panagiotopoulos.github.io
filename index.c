# Check out solution URL
$ cat solution.txt
apostolos-panagiotopoulos.github.io
# Ensure the URL exists
$ curl --output /dev/null --silent --head --fail YourUsername.github.io && \
echo "URL exists" || echo "URL does not exist"
