// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILOBJCITERATOR_H
#define COMAPPLECONTEXTKITUTILOBJCITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"

@interface ComAppleContextkitUtilObjcIterator : NSObject <JavaUtilIterator>

 {
    id *nsEnumerator_;
    id *object_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 ;
-(id)enumeratorWithId:(id)arg0 ;
-(id)advanceWithId:(id)arg0 ;
-(BOOL)hasNext;
-(void)remove;
-(id)next;
-(void)dealloc;


@end


#endif