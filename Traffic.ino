// ── Pin definitions ──────────────────────
const int RED    = 13;
const int YELLOW = 12;
const int GREEN  = 11;
// ── Timings (milliseconds) ───────────────
const int T_RED    = 30000;  // 30 sec
const int T_RY     = 3000;   // 3 sec
const int T_GREEN  = 25000;  // 25 sec
const int T_YELLOW = 4000;   // 4 sec
void setup() {
  pinMode(RED,    OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN,  OUTPUT);
}
void loop() {
Phase 1 — Red (30s)
  setLights(HIGH, LOW, LOW);
  delay(T_RED);
Phase 2 — Red+Yellow (3s)
  setLights(HIGH, HIGH, LOW);
  delay(T_RY);
Phase 3 — Green (25s)
  setLights(LOW, LOW, HIGH);
  delay(T_GREEN);
Phase 4 — Yellow (4s)
  setLights(LOW, HIGH, LOW);
  delay(T_YELLOW);
}
void setLights(int r, int y, int g) {
  digitalWrite(RED,    r);
  digitalWrite(YELLOW, y);
  digitalWrite(GREEN,  g);
}