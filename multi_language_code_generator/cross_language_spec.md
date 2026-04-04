# Cross-Language Specification - Movie Recommendation Engine

## Algorithm
Generate personalized movie recommendations using collaborative filtering:
- Identify users with similar rating patterns to the target user.
- Compute similarity-weighted scores for movies the target user has not rated.
- Return the top N movies sorted by predicted rating.

## Inputs
- `user_ratings.csv`: CSV file with columns `user_id, movie_id, rating`
- `target_user_id`: ID of the user to generate recommendations for
- `N`: Number of recommendations to return

## Outputs
- JSON array of recommended movies with predicted ratings, e.g.:
```json
[
  {"movie_id": 102, "predicted_rating": 4.7},
  {"movie_id": 57, "predicted_rating": 4.5}
]