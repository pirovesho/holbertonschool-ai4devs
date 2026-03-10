# Technical Specification

## System Components
- **Authentication Service**: Handles user login, registration, and secure access through corporate Single Sign-On (SSO).
- **Ride Matching Service**: Matches employees with similar commute routes, schedules, and preferences for efficient carpooling.
- **Notification Service**: Sends alerts for ride requests, confirmations, cancellations, and schedule updates.
- **Analytics & Reporting Service**: Tracks environmental impact, participation metrics, and cost savings for employees and management.

## Data Models
- **User**: id, name, email, role, company_id, rating  
- **Ride**: id, driver_id, passenger_ids, origin, destination, departure_time, available_seats, status  
- **CarpoolRequest**: id, user_id, ride_id, request_status, created_at  

## API Endpoints
- **POST /auth/login**  
  Parameters: email, password  

- **GET /rides/search**  
  Parameters: origin, destination, departure_time  

- **POST /rides/create**  
  Parameters: driver_id, origin, destination, departure_time, available_seats  

- **POST /rides/request**  
  Parameters: ride_id, user_id  

- **POST /rides/confirm**  
  Parameters: request_id, driver_id  

- **GET /analytics/emissions**  
  Parameters: company_id, date_range