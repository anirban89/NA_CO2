#ifdef ALLOW_PTRACERS

CBOP
C    !ROUTINE: PTRACERS_SIZE.h
C    !INTERFACE:
C #include PTRACERS_SIZE.h
 
C    !DESCRIPTION:
C Contains passive tracer array size (number of tracers).

C PTRACERS_num defines how many passive tracers are allocated/exist.
C  and is set here (default 1)
C
C PTRACERS_idx number of perturbations to be applied in
C  ptracers_forcing_surf.F
C
C     Number of tracers
      INTEGER PTRACERS_num
      PARAMETER(PTRACERS_num = 2 )
      INTEGER PTRACERS_idx
      PARAMETER(PTRACERS_idx = 10 )

CEOP
#endif /* ALLOW_PTRACERS */
