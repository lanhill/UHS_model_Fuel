# 3D reservoir model for underground hydrogen storage (UHS)
A 3D reservoir model used in an underground hydrogen storage (UHS) study (Luo et al. 2024)

Luo, X., Tveit, S., Gholami, R., & Andersen, P. Ø. (2024). Underground hydrogen storage (UHS) in natural storage sites: A perspective of subsurface characterization and monitoring. Fuel, 364, 131038. URL: https://doi.org/10.1016/j.fuel.2024.131038

This reservoir model was initially developed in the following paper (Hogeweg et al. 2022):

Hogeweg, S., Strobel, G., & Hagemann, B. (2022). Benchmark study for the simulation of Underground Hydrogen Storage operations. Computational Geosciences, 26(6), 1367-1378. URL: https://doi.org/10.1007/s10596-022-10163-5

We made some minor changes in the original model of Hogeweg et al. 2022 to better fit our purpose.

The uploaded dataset contains the following folders/files:

Folders:
 
-"Grid_Props" contains files to run the ECLIPSE 300 model "UHS_MOD.DATA" 
 
-"Inc_Files" contains files to run the ECLIPSE 300 model "UHS_MOD.DATA" 


Files: 

-"UHS_MOD.DATA": ECLIPSE 300 data file of the 3D reservoir model

-"Hist_mod": ECLIPSE schedule file

-"L_summary.inc": ECLIPSE summary file

-"true_PERMX.txt": Natural logarithm of x-directional permeability (PERMX) of the reference model used in Luo et al. 2024.  

-"true_PORO.txt": Porosity of the reference model used in Luo et al. 2024. 

-"init_permx.mat": MATLAB data file containing an initial ensemble of 100 log PERMX fields used in Luo et al. 2024.  

--"init_poro.mat": MATLAB data file containing an initial ensemble of 100 porosity fields used in Luo et al. 2024.  


DISCLAIMER:
THE DATASET IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS, COPYRIGHT HOLDERS, OR RELATED THIRD PARTIES BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


