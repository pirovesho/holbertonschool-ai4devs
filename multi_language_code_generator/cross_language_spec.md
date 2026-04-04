# Cross-Language Specification - Movie Recommendation Engine

## Algorithm
Generate personalized movie recommendations using collaborative filtering:
- Find users with similar rating patterns to the target user
- Predict ratings for unseen movies using similarity-weighted averages
- Return the top N highest-rated unseen movies

## Inputs
- `user_ratings.csv` (user_id, movie_id, rating)
- `target_user_id`
- `N` (number of recommendations)

## Outputs
- JSON array of recommended movies with predicted ratings

## Edge Cases
- New user with no ratings
- Target user not in dataset
- All users give identical ratings
- User has rated all movies
- Empty dataset
- Sparse data (very few ratings)

## Test Cases
- ratings_small.csv, user=1, N=3 → 3 recommendations
- ratings_sparse.csv, user=2, N=5 → ≤5 recommendations
- ratings_full.csv, user=3, N=10 → empty list
- ratings_empty.csv, user=4, N=3 → empty list
- ratings_tie.csv, user=5, N=2 → tie handled
- ratings_new_user.csv, user=999, N=3 → empty list