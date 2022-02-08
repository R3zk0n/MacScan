// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDHASHMAP_H
#define JAVAUTILLINKEDHASHMAP_H



#import "JavaUtilHashMap.h"
#import "JavaUtilLinkedHashMap_LinkedEntry.h"

@interface JavaUtilLinkedHashMap : JavaUtilHashMap {
    JavaUtilLinkedHashMap_LinkedEntry *header_;
    BOOL accessOrder_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 withBoolean:(BOOL)arg2 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(void)init__;
-(id)eldest;
-(void)addNewEntryWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)addNewEntryForNullKeyWithId:(id)arg0 ;
-(id)constructorNewRetainedEntryWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withJavaUtilHashMap_HashMapEntry:(id)arg3 ;
-(id)getWithId:(id)arg0 ;
-(void)makeTailWithJavaUtilLinkedHashMap_LinkedEntry:(id)arg0 ;
-(void)preModifyWithJavaUtilHashMap_HashMapEntry:(id)arg0 ;
-(void)postRemoveWithJavaUtilHashMap_HashMapEntry:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(void)clear;
-(id)newKeyIterator;
-(id)newValueIterator;
-(id)newEntryIterator;
-(BOOL)removeEldestEntryWithJavaUtilMap_Entry:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)enumerateEntriesWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif