import json

# Data extracted from the image
data = [
    {"team1": "H", "score1": 3, "team2": "J", "score2": 1},
    {"team1": "H", "score1": 5, "team2": "P", "score2": 1},
    {"team1": "J", "score1": 2, "team2": "P", "score2": 1},
]

# Function to convert the data to the required JSON format
def convert_to_json(data):
    result = []
    for match in data:
        match_result = {
            "teams": [
                {"name": match["team1"], "score": match["score1"]},
                {"name": match["team2"], "score": match["score2"]}
            ]
        }
        result.append(match_result)
    return json.dumps(result, indent=4)

# Convert and print the JSON
json_output = convert_to_json(data)
print(json_output)