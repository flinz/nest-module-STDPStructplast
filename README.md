[![Build Status](https://travis-ci.org/flinz/nest-module-STDPStructplast.svg?branch=master)](https://travis-ci.org/flinz/nest-module-STDPStructplast)

# nest-module-STDPStructplast

Combined STDP and structural plasticity synapse model with multiple synaptic contacts, that creates a new synapse model called ``stdp_structpl_synapse_hom``.

The connector ``stdp_structpl_synapse_hom`` can create synapses with spike time dependent plasticity as defined in [1, 2]. Each synapse (connection) of this model consists of several (``n_pot_conns``) synaptic contacts. If the weight of a contact drops below 0 the contact is deleted. Deleted contacts are recreated randomly with a constant rate.

## References
[1] Moritz Deger, Alexander Seeholzer, Wulfram Gerstner - Multi-contact synapses
for stable networks: a spike-timing dependent model of dendritic spine
plasticity and turnover. Preprint arXiv:1609.05730 [q-bio.NC]
https://arxiv.org/abs/1609.05730

[2] Moritz Deger, Alexander Seeholzer, Wulfram Gerstner - Multicontact Co-Operativity in Spike-Timing–Dependent Structural Plasticity Stabilizes Networks. Cerebral Cortex 28, no. 4 (April 1, 2018): 1396–1415.
https://doi.org/10.1093/cercor/bhx339.



## Installation Guide

This module requires NEST and Python bindings. Make sure to run ``source nest-install-dir/bin/nest-vars.sh`` before, to properly set the environment variable ``NEST_INSTALL_DIR`` used below.

```bash
git clone https://github.com/flinz/nest-module-STDPStructplast
cd nest-module-STDPStructplast
mkdir build && cd build
cmake -Dwith-nest=${NEST_INSTALL_DIR}/bin/nest-config ..
make
make install
make test
```
