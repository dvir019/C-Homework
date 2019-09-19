/*
bishopX - The X position of the bishop
bishopY - The Y position of the bishop
kingX - The X position of the king
kingY - The Y position of the king

// One way
if (bishopX - kingX == bishopY - kingY || bishopX - kingX == kingY - bishopY)
{
	// Threatened
}

// Another way
if (ABS(bishopX - kingX) == ABS(bishopY - kingY))
{
	// Threatened
}
*/