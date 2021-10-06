# The Nnexio: A Religious Tool of the Future

[Tinkercad link to Nnexio](https://www.tinkercad.com/things/kesA7uzwMNh-copy-of-creative-lab-1-104-336/editel?sharecode=ItRCor6-ObHgM5pdrbiHikPPvoi8U7YYqKcb01NzBUs)

## Background
Reading Donna Haraway’s “A Cyborg Manifesto” (1985), I was both intimidated and excited by the transgressive possibilities of breaching traditional western taboos. At the same time, I found the reading about affordances fascinating, particularly on the question of “direct” vs. “culturally-specific” affordances. While not directly related to HCI, I began thinking about religious tools: a Christian cross has no obvious affordances, and yet it has been one of the central, unchanging religious tools in western culture for the past thousand years. What about a physical cross gives it its persistent ‘pray-with-ability’?

As I began to think about an interface of the future, my thoughts wandered into what shape ritual and tradition might take a thousand years from now. What might those affordances look like?

To merge these various trains of thought, my challenge to myself was as follows: create an electronic religious tool. The idea of circuitry built into religion feels both blasphemous and inevitable, in the same vein of Haraway’s Cyborg. I wonder what possibilities open up when we break the continuity of familiar western religious objects/traditions and let them take new shapes that mirror the digital future we are careening towards. As a result, I have invented _The Nnexio_.

## Description
The sacredness of the Nnexio derives from its use in the blessed unity ritual (what once might have been called a wedding). Monogamy has given way to non-gendered polyamory, perhaps a consequence of the end of sexual reproduction. The blessed unity ritual is performed to commemorate the bond of a newly formed socio-sexual pod, and culminates with the members physically and emotionally uniting using the communal Nnexio. 

The device can be configured for any number of pod members, but is traditionally set up for use by 3-10 people. The pod members will arrange themselves in a circle around the Nnexio, each picking up a wire that’s connected to the central hub. The central hub contains a ring of lights: wealthier temples might have decoratively ornate, multi-tiered central hubs while poorer rural temples might simply contain a few simple LEDs. What’s certain is that every place of worship has one, each tinted by their own local culture.

![Rough sketch of unity ceremony for four a four member pod](visuals/sketch-of-nnexio-in-use.jpg?raw=true)

When the ceremony begins, the lights of the temple are shut off and pod members place the flat metal plate at the end of the wire on their chest. As the plate heats up from their body’s energy a light indicator near their position in the ring turns on. When all members are connected to the circuit, the central hub begins to glow getting brighter the longer they stay connected. The ritual symbolizes the organic becoming electric and the merging of their energies into one circuit brighter than their individual parts. Congregants see not people, but simply lights, energy, commingling in the dark, becoming one. 

## Implementation
The tinkercad circuit shows a prototype of how this device would work on a full scale. In this example, the Nnexio will be used for a four person unity pod. Each person would stand next to a temperature sensor. The Arduino listens for when a temperature sensor goes above a certain threshold, and then turns on the corresponding indicator light. When all indicator lights are on (meaning everyone is connected to the circuit), the arduino initiates powering the central hub. If any member were to remove themselves from the circuit, the arduino shuts down the central hub (doing so during the ceremony would be considered sacrilegious).

https://user-images.githubusercontent.com/5685294/136089871-32d28978-7f34-4053-a7f3-da1e50056a5c.mp4

## Further Study
If I were to continue working on this, I’d want to deepen my knowledge of electric religious tools from history (although I can’t think of any) and in science fiction (of which I’m sure there are many). 

Technically, I think more can be done to increase the drama of the central hub lighting up. For example, using analog outputs so that the indicators and central hub go from dim to light would be an interesting step. As I learn about more actuators, the complexity of the central hubs “ignition” could also be improved such as introducing color, sound, motors, etc. Finally, a temperature detector works nicely here, but a more relevant sensor might be one that generates/detects an electrical current in a person (if that’s even possible) which more closely fits the metaphor of the individual electric members joining a circuit larger than themselves.

Another interesting extension could be to somehow “upload” their unity to the network, perhaps by recording their thumbprints and adding them to a blockchain, representing their eternal union in digital memory replicated securely across the galaxies. 
