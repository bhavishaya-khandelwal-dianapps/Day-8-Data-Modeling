//todo -- Data Modeling : The data modeling or data structuring represents the nature of data, and the business logic to control the data. It also organize the database. 
//? The structures of data are explicitly determines by the data model. 
//! Data models are made up of entities, which are the objects or concepts we want to track data about, and they becomes the tables in a database.
//* Data model helps to communicate between business people, who requires the computer system, and the technical people, who can fulfill their requirements. 



//todo -- The data modelling concept has three levels. These are like this : 
//* 1. Conceptual Model : Begin the scope of a model, it helps to describe the semantics of a domain.

//? 2. Logical Model : In this model, there are descriptions of Tables, Columns, Object Oriented Classes, XML Tags, Document Structures. 

//* Physical Model : This model cares about the actual physical structure to store the data, like the partitions, CPU Spaces, Replications, Shards, etc.



//todo -- Data Modeling should enforce data integrity : 
//* In data modeling, there are two kinds of rules that are foundational to maintaining data integrity— 
//? 1. entity integrity 
//? 2. referential integrity


//? 1. Entity Integrity : Entity integrity means that the data within a single entity or table are reliable. 
//* The use of primary keys is an essential step toward entity integrity. 
//? Primary keys are unique identifiers, such as product ID numbers, that serve the purpose of identifying a particular record and preventing data duplication.
//* There are 3 parts to the ENTITY INTEGRITY rule :
    //? All entities should have a primary key.
    //? The values of all primary keys must be unique. 
    //? The value of a primary key cannot be null. 


//* 2. Referential Integrity : Referential integrity means that the relationship between two entities or tables is reliable. The use of foreign keys is an essential step toward referential integrity. 
//? Foreign Keys : Foreign keys are the primary keys of one table that appear in a different table.
//! The rule of referential integrity says that for any foreign key value in one table, there must be a matching primary key value in the referenced table.


//? Normalization : is the process by which anomalies are avoided and redundancy is eliminated. 
//* Normalizing a data model means structuring data so that each entity only has one theme or topic 
//? Basically normalization means removing partial and transitive dependencies. 


//? There are 3 different level of Normalization :- 1NF, 2NF, 3NF 



//todo -- Different Models have Different Purposes 
//? When your organization starts data modeling, it's important to have discussions about the purpose of the data model. 
//* There are 2 types of Data Models -
    //? 1. Relational Model 
    //? 2. Dimensional Model 


    //* 1. Relational Model :- Relational data modeling results in tables that are in 3NF, and it is used for building transactional and operational systems, such as point of sale systems. 
    //? Relational models are designed to be great at getting data into a database in a way that maintains integrity and stores every piece of non-key data only once. 
    //todo-- used for TRANSACTIONAL and OPERATIONAL SYSTEMS


    //* 2. Dimensional Data Modeling :- can result in a design called star schema, which has denormalized tables, and it is used for building reporting and analytical systems.
    //? Dimensional models are designed to be great at getting data out of a data warehouse and into the hands of business users. 
    //* By storing data in a less normalized form, dimensional models make it much easier to query across many different tables. 
    //todo -- used for REPORTING and ANALYTICAL SYSTEMS. 



//todo -- NOTE : Data Modeling should not occur in isolatio, and it should include both business and technical experts. 




//todo -- Questions  
//! Why we need Data Modeling.....??
//? Data modeling is important because it helps us organize and structure data in a way that makes it easier to understand, use, and manage.
//* 1. Clear Organization : helps you organize large amounts of data into a clear, structured format. 
//? 2. Easier Access and Use : With a model, it's easier for people to find and work with the data. 
//* 3. Avoid Confusion : When you have complex data, it can easily get confusing. A data model provides a blueprint or map, so everyone knows where to look and how to connect the dots. 
//? 4. Improves Decision Making : 
//* 5. Consistency and Quality : Data models help ensure that the data is accurate, consistent, and of high quality.



//? Data Object -> is simply a representation of a composite(means something that has different properties) information that must be understood and processed by the system. 
//* An external entity -> 
//? A thing 
//* An occurance 
//? Event 
//* A role 
//? A Place 
//* A structure 

//? Data Attributes -> Basically these are the properties which are responsible for defining the data objects 
//* Example -> Let's take STUDENT object and we know that to define this STUDENT object we need to define some attributes like it's NAME, ROLL_NUMBER, FATHER_NAME, MOTHER_NAME but if we talk about ROLL_NUMBER then we know that it is different for every studnet so we can say it as KEY_ATTRIBUTE(and it helps us in finding a particular instance of a data object)


//? Relationship between objects --- 
//* Let's consider two data objects first is PERSON and the other is CAR,   PERSON----------------CAR    ==>   PERSON owns CAR





//todo -- Data Model Documentation : Data model documentation encompasses a range of materials that facilitate the understanding, maintenance, and modification of a data model. It typically includes diagrams, tables, examples, scenarios, and detailed notes that clarify design choices.
//? This documentation is crucial for various stakeholders, including technical team members and non-technical individuals such as clients or sponsors, ensuring they comprehend the model's history, purpose, logic, dependencies, and constraints.
//* Data model documentation serves as a key communication tool between different stakeholders, making complex data models accessible and understandable to all involved parties



//todo -- What are the Best Practices for Data Modeling ?
    //? Effective data modeling requires adherence to certain best practices to ensure the creation of a functional and efficient model. These practices include understanding business requirements, keeping the model simple, organizing data around key elements like dimensions, facts, and measures, using only necessary data, verifying each stage for accuracy, focusing on causation rather than correlation, designing adaptable models, employing intelligent tools, and maintaining consistent naming conventions.
    //* Business requirements
    //? Keeping model simple 


//todo -- Common Data Modeling Techniques include -
    //? 1. Entity-Relationship Model -> It focuses on identifying entities and there interrelations within the data.
    //? 2. Hierarchical Data Modeling -> It organizes data in a tree-like sturture, establishing parent-child relationships among the data elements.
    //? 3. Relational Data Modeling -> Involves representing data in tables(relations), focusing on how data is connected.