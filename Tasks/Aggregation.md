# Aggregation Problem Scenarios in C++

Here are five unique and complex problem scenarios using aggregation in C++. These problems go beyond a simple "has-a" relationship and require additional calculations and logic within the aggregating class.

---

## 1. **Space Mission Command Center 🚀**

**Scenario:**
Design a `MissionControl` class that manages multiple **`Spacecraft`** objects. Each `Spacecraft` has attributes like **`name`**, **`fuelLevel`** (in liters), and **`payloadWeight`** (in kg). The `MissionControl` class should have a collection of `Spacecraft` objects.

**Problem:**
The `MissionControl` class needs to perform a complex calculation to determine the **Total Orbital Duration** possible for the entire fleet. The orbital duration of a single `Spacecraft` is calculated as:

```math
\frac{\text{fuelLevel} \times \text{fuelEfficiency}}
     {\text{baseConsumption} + \text{payloadWeight} \times \text{consumptionFactor}}
```

where `fuelEfficiency`, `baseConsumption`, and `consumptionFactor` are constant values defined within the `MissionControl` class.
The **Total Orbital Duration** is the sum of the individual orbital durations of all spacecrafts. If any spacecraft's fuel level is below a certain threshold, it should not be included in the calculation.

**Classes:**

* `Spacecraft` (aggregated class)
* `MissionControl` (aggregating class)

---

## 2. **Mega-Mall Inventory System 🛍️**

**Scenario:**
Create a **`MegaMall`** class that manages several **`Department`** objects. Each `Department` (e.g., Electronics, Apparel, Groceries) has a list of **`Product`** objects. Each `Product` has a **`price`**, **`quantity`**, and a **`discountPercentage`**.

**Problem:**
The `MegaMall` class needs to calculate the **Total Mall Revenue** after applying all discounts. This requires iterating through each `Department` and then through each `Product` within that department.

The revenue for a single product is calculated as:

```math
\text{Revenue} = (\text{price} \times \text{quantity}) 
              - (\text{price} \times \text{quantity} \times \frac{\text{discountPercentage}}{100})
```

The **Total Mall Revenue** is the sum of the revenues of all products across all departments.
The system also needs to identify the department with the **highest total revenue**.

💰 Note: All monetary values are in **INR (₹)** instead of dollars.

**Classes:**

* `Product` (inner aggregated class)
* `Department` (outer aggregated class)
* `MegaMall` (aggregating class)

---

## 3. **University Admission System 🎓**

**Scenario:**
Develop a **`University`** class that contains a list of **`Department`** objects. Each `Department` has a list of **`Student`** objects. A `Student` has attributes like **`name`**, **`GPA`** (Grade Point Average), and a **`numberOfCreditsCompleted`**.

**Problem:**
The `University` class must calculate the **Average GPA** for the entire university, but with a twist.
The calculation must be a **weighted average**, where each student's GPA is weighted by their number of completed credits:

```math
\text{Weighted Average GPA} =
\frac{\sum(\text{Student GPA} \times \text{Credits Completed})}
     {\sum(\text{Credits Completed})}
```

The program should also find the department with the **highest weighted average GPA**.

**Classes:**

* `Student` (aggregated class)
* `Department` (outer aggregated class)
* `University` (aggregating class)

---

## 4. **Smart City Power Grid ⚡**

**Scenario:**
Create a **`City`** class that manages a collection of **`Building`** objects. Each `Building` contains a list of **`Appliance`** objects. Each `Appliance` has a **`powerConsumption`** rate (in kWh) and an **`operatingHours`** per day.

**Problem:**
The `City` class needs to calculate the **Total Daily Energy Cost** for the entire city's power grid.
The cost for a single appliance is calculated as:

```math
\text{Cost} = \text{powerConsumption} \times \text{operatingHours} \times \text{costPerKWh}
```

The `costPerKWh` is a variable that changes based on the time of day, with a **premium costPerKWh** for peak hours (e.g., 6 PM to 10 PM) and a **standard costPerKWh** for off-peak hours.

The **Total Daily Energy Cost** is the sum of all appliance costs.
The program should also report which building has the **highest total energy consumption**.

**Classes:**

* `Appliance` (aggregated class)
* `Building` (outer aggregated class)
* `City` (aggregating class)

---

## 5. **Global Shipping Fleet Logistics 🚢**

**Scenario:**
Model a **`ShippingCompany`** class that owns a fleet of **`Vessel`** objects. Each `Vessel` contains a list of **`CargoContainer`** objects. Each `CargoContainer` has a **`weight`** and a **`destinationPort`**.

**Problem:**
The `ShippingCompany` class needs to calculate the **Total Shipping Fee** for a given destination port.

The fee for a single container is a **tiered calculation** based on its weight:

* `0 - 1000 kg`: **₹10 per kg**
* `1001 - 5000 kg`: **₹8 per kg**
* `> 5000 kg`: **₹6 per kg**

The calculation must first filter containers by the specified `destinationPort`.
The **Total Shipping Fee** is the sum of the fees for all containers heading to that destination.

Additionally, the program needs to identify the vessel with the **highest total cargo weight**.

**Classes:**

* `CargoContainer` (aggregated class)
* `Vessel` (outer aggregated class)
* `ShippingCompany` (aggregating class)
