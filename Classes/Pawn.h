//
//  Pawn.h
//  app3
//
//  Created by Jordan Doczy on 3/19/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Piece.h"

@interface Pawn : Piece { }

- (int) getRowDistance:(Move *)move;


@end
