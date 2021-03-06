//
//  PPLineParser.h
//  PlayerPiano
//
//  Created by Steve Streza on 2/13/10.
//  Copyright 2010 Villainware.
//
//  See LICENSE.md file in the PlayerPiano source directory, or at
//  http://github.com/amazingsyco/PlayerPiano/blob/master/LICENSE.md
//

#import <Foundation/Foundation.h>
#import "PPLineRecognizer.h"

@interface PPLineParser : NSObject {
	NSMutableArray *lineRecognizers;
}

-(void)addLineRecognizer:(PPLineRecognizer *)recognizer;

-(void)parseLine:(NSString *)line;

@end
