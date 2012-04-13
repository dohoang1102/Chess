//
//  Rules.h
//  Chess
//
//  Created by Jordan Doczy on 4/13/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Board;
@class Move;
@class Piece;


@interface Rules : NSObject {

}

- (id) initWithModel:(History *)history;
- (BOOL) isMoveValid:(Move *)move;
- (BOOL) isSameColor:(Piece *)from :(Piece *)to;

@end