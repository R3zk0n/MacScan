// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef NSDICTIONARYMAP_ENTRY_H
#define NSDICTIONARYMAP_ENTRY_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "JavaUtilMap_Entry-Protocol.h"

@interface NSDictionaryMap_Entry : NSObject <JavaUtilMap_Entry>

 {
    NSMutableDictionary *dictionary_;
    id *key_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithDictionary:(id)arg0 key:(id)arg1 ;
-(void)dealloc;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;


@end


#endif