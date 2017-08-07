#ifndef _CISCO_PTP_MIB_
#define _CISCO_PTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PTP_MIB {

class CiscoPtpMib : public ydk::Entity
{
    public:
        CiscoPtpMib();
        ~CiscoPtpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Ciscoptpmibsysteminfo; //type: CiscoPtpMib::Ciscoptpmibsysteminfo
        class Cptpsystemtable; //type: CiscoPtpMib::Cptpsystemtable
        class Cptpsystemdomaintable; //type: CiscoPtpMib::Cptpsystemdomaintable
        class Cptpclocknodetable; //type: CiscoPtpMib::Cptpclocknodetable
        class Cptpclockcurrentdstable; //type: CiscoPtpMib::Cptpclockcurrentdstable
        class Cptpclockparentdstable; //type: CiscoPtpMib::Cptpclockparentdstable
        class Cptpclockdefaultdstable; //type: CiscoPtpMib::Cptpclockdefaultdstable
        class Cptpclockrunningtable; //type: CiscoPtpMib::Cptpclockrunningtable
        class Cptpclocktimepropertiesdstable; //type: CiscoPtpMib::Cptpclocktimepropertiesdstable
        class Cptpclocktransdefaultdstable; //type: CiscoPtpMib::Cptpclocktransdefaultdstable
        class Cptpclockporttable; //type: CiscoPtpMib::Cptpclockporttable
        class Cptpclockportdstable; //type: CiscoPtpMib::Cptpclockportdstable
        class Cptpclockportrunningtable; //type: CiscoPtpMib::Cptpclockportrunningtable
        class Cptpclockporttransdstable; //type: CiscoPtpMib::Cptpclockporttransdstable
        class Cptpclockportassociatetable; //type: CiscoPtpMib::Cptpclockportassociatetable

        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Ciscoptpmibsysteminfo> ciscoptpmibsysteminfo;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockcurrentdstable> cptpclockcurrentdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockdefaultdstable> cptpclockdefaultdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocknodetable> cptpclocknodetable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockparentdstable> cptpclockparentdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportassociatetable> cptpclockportassociatetable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportdstable> cptpclockportdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportrunningtable> cptpclockportrunningtable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttable> cptpclockporttable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttransdstable> cptpclockporttransdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockrunningtable> cptpclockrunningtable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktimepropertiesdstable> cptpclocktimepropertiesdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktransdefaultdstable> cptpclocktransdefaultdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemdomaintable> cptpsystemdomaintable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemtable> cptpsystemtable;
        
}; // CiscoPtpMib


class CiscoPtpMib::Ciscoptpmibsysteminfo : public ydk::Entity
{
    public:
        Ciscoptpmibsysteminfo();
        ~Ciscoptpmibsysteminfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpsystemprofile; //type: Clockprofiletype

}; // CiscoPtpMib::Ciscoptpmibsysteminfo


class CiscoPtpMib::Cptpsystemtable : public ydk::Entity
{
    public:
        Cptpsystemtable();
        ~Cptpsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpsystementry; //type: CiscoPtpMib::Cptpsystemtable::Cptpsystementry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemtable::Cptpsystementry> > cptpsystementry;
        
}; // CiscoPtpMib::Cptpsystemtable


class CiscoPtpMib::Cptpsystemtable::Cptpsystementry : public ydk::Entity
{
    public:
        Cptpsystementry();
        ~Cptpsystementry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpdomainindex; //type: uint32
        ydk::YLeaf cptpinstanceindex; //type: uint32
        ydk::YLeaf cptpdomainclockportstotal; //type: uint32
        ydk::YLeaf cptpdomainclockportphysicalinterfacestotal; //type: uint32

}; // CiscoPtpMib::Cptpsystemtable::Cptpsystementry


class CiscoPtpMib::Cptpsystemdomaintable : public ydk::Entity
{
    public:
        Cptpsystemdomaintable();
        ~Cptpsystemdomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpsystemdomainentry; //type: CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry> > cptpsystemdomainentry;
        
}; // CiscoPtpMib::Cptpsystemdomaintable


class CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry : public ydk::Entity
{
    public:
        Cptpsystemdomainentry();
        ~Cptpsystemdomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpsystemdomainclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpsystemdomaintotals; //type: uint32

}; // CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry


class CiscoPtpMib::Cptpclocknodetable : public ydk::Entity
{
    public:
        Cptpclocknodetable();
        ~Cptpclocknodetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclocknodeentry; //type: CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry> > cptpclocknodeentry;
        
}; // CiscoPtpMib::Cptpclocknodetable


class CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry : public ydk::Entity
{
    public:
        Cptpclocknodeentry();
        ~Cptpclocknodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockdomainindex; //type: uint32
        ydk::YLeaf cptpclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockinput1ppsenabled; //type: boolean
        ydk::YLeaf cptpclockinputfrequencyenabled; //type: boolean
        ydk::YLeaf cptpclocktodenabled; //type: boolean
        ydk::YLeaf cptpclockoutput1ppsenabled; //type: boolean
        ydk::YLeaf cptpclockoutput1ppsoffsetenabled; //type: boolean
        ydk::YLeaf cptpclockoutput1ppsoffsetvalue; //type: uint32
        ydk::YLeaf cptpclockoutput1ppsoffsetnegative; //type: boolean
        ydk::YLeaf cptpclockinput1ppsinterface; //type: string
        ydk::YLeaf cptpclockoutput1ppsinterface; //type: string
        ydk::YLeaf cptpclocktodinterface; //type: string

}; // CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry


class CiscoPtpMib::Cptpclockcurrentdstable : public ydk::Entity
{
    public:
        Cptpclockcurrentdstable();
        ~Cptpclockcurrentdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockcurrentdsentry; //type: CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry> > cptpclockcurrentdsentry;
        
}; // CiscoPtpMib::Cptpclockcurrentdstable


class CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry : public ydk::Entity
{
    public:
        Cptpclockcurrentdsentry();
        ~Cptpclockcurrentdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockcurrentdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockcurrentdsclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockcurrentdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockcurrentdsstepsremoved; //type: uint32
        ydk::YLeaf cptpclockcurrentdsoffsetfrommaster; //type: binary
        ydk::YLeaf cptpclockcurrentdsmeanpathdelay; //type: binary

}; // CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry


class CiscoPtpMib::Cptpclockparentdstable : public ydk::Entity
{
    public:
        Cptpclockparentdstable();
        ~Cptpclockparentdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockparentdsentry; //type: CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry> > cptpclockparentdsentry;
        
}; // CiscoPtpMib::Cptpclockparentdstable


class CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry : public ydk::Entity
{
    public:
        Cptpclockparentdsentry();
        ~Cptpclockparentdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockparentdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockparentdsclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockparentdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockparentdsparentportidentity; //type: binary
        ydk::YLeaf cptpclockparentdsparentstats; //type: boolean
        ydk::YLeaf cptpclockparentdsoffset; //type: int32
        ydk::YLeaf cptpclockparentdsclockphchrate; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockidentity; //type: binary
        ydk::YLeaf cptpclockparentdsgmclockpriority1; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockpriority2; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockqualityclass; //type: uint32
        ydk::YLeaf cptpclockparentdsgmclockqualityaccuracy; //type: Clockqualityaccuracytype
        ydk::YLeaf cptpclockparentdsgmclockqualityoffset; //type: uint32

}; // CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry


class CiscoPtpMib::Cptpclockdefaultdstable : public ydk::Entity
{
    public:
        Cptpclockdefaultdstable();
        ~Cptpclockdefaultdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockdefaultdsentry; //type: CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry> > cptpclockdefaultdsentry;
        
}; // CiscoPtpMib::Cptpclockdefaultdstable


class CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry : public ydk::Entity
{
    public:
        Cptpclockdefaultdsentry();
        ~Cptpclockdefaultdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockdefaultdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockdefaultdsclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockdefaultdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockdefaultdstwostepflag; //type: boolean
        ydk::YLeaf cptpclockdefaultdsclockidentity; //type: binary
        ydk::YLeaf cptpclockdefaultdspriority1; //type: int32
        ydk::YLeaf cptpclockdefaultdspriority2; //type: int32
        ydk::YLeaf cptpclockdefaultdsslaveonly; //type: boolean
        ydk::YLeaf cptpclockdefaultdsqualityclass; //type: uint32
        ydk::YLeaf cptpclockdefaultdsqualityaccuracy; //type: Clockqualityaccuracytype
        ydk::YLeaf cptpclockdefaultdsqualityoffset; //type: int32

}; // CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry


class CiscoPtpMib::Cptpclockrunningtable : public ydk::Entity
{
    public:
        Cptpclockrunningtable();
        ~Cptpclockrunningtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockrunningentry; //type: CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry> > cptpclockrunningentry;
        
}; // CiscoPtpMib::Cptpclockrunningtable


class CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry : public ydk::Entity
{
    public:
        Cptpclockrunningentry();
        ~Cptpclockrunningentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockrunningdomainindex; //type: uint32
        ydk::YLeaf cptpclockrunningclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockrunninginstanceindex; //type: uint32
        ydk::YLeaf cptpclockrunningstate; //type: Clockstatetype
        ydk::YLeaf cptpclockrunningpacketssent; //type: uint64
        ydk::YLeaf cptpclockrunningpacketsreceived; //type: uint64

}; // CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry


class CiscoPtpMib::Cptpclocktimepropertiesdstable : public ydk::Entity
{
    public:
        Cptpclocktimepropertiesdstable();
        ~Cptpclocktimepropertiesdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclocktimepropertiesdsentry; //type: CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry> > cptpclocktimepropertiesdsentry;
        
}; // CiscoPtpMib::Cptpclocktimepropertiesdstable


class CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry : public ydk::Entity
{
    public:
        Cptpclocktimepropertiesdsentry();
        ~Cptpclocktimepropertiesdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclocktimepropertiesdsdomainindex; //type: uint32
        ydk::YLeaf cptpclocktimepropertiesdsclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclocktimepropertiesdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclocktimepropertiesdscurrentutcoffsetvalid; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdscurrentutcoffset; //type: int32
        ydk::YLeaf cptpclocktimepropertiesdsleap59; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsleap61; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdstimetraceable; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsfreqtraceable; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsptptimescale; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdssource; //type: Clocktimesourcetype

}; // CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry


class CiscoPtpMib::Cptpclocktransdefaultdstable : public ydk::Entity
{
    public:
        Cptpclocktransdefaultdstable();
        ~Cptpclocktransdefaultdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclocktransdefaultdsentry; //type: CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry> > cptpclocktransdefaultdsentry;
        
}; // CiscoPtpMib::Cptpclocktransdefaultdstable


class CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry : public ydk::Entity
{
    public:
        Cptpclocktransdefaultdsentry();
        ~Cptpclocktransdefaultdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclocktransdefaultdsdomainindex; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsclockidentity; //type: binary
        ydk::YLeaf cptpclocktransdefaultdsnumofports; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsdelay; //type: Clockmechanismtype
        ydk::YLeaf cptpclocktransdefaultdsprimarydomain; //type: int32

}; // CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry


class CiscoPtpMib::Cptpclockporttable : public ydk::Entity
{
    public:
        Cptpclockporttable();
        ~Cptpclockporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockportentry; //type: CiscoPtpMib::Cptpclockporttable::Cptpclockportentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttable::Cptpclockportentry> > cptpclockportentry;
        
}; // CiscoPtpMib::Cptpclockporttable


class CiscoPtpMib::Cptpclockporttable::Cptpclockportentry : public ydk::Entity
{
    public:
        Cptpclockportentry();
        ~Cptpclockportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockportdomainindex; //type: uint32
        ydk::YLeaf cptpclockportclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockportclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockporttableportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportname; //type: string
        ydk::YLeaf cptpclockportrole; //type: Clockroletype
        ydk::YLeaf cptpclockportsynconestep; //type: boolean
        ydk::YLeaf cptpclockportcurrentpeeraddresstype; //type: Inetaddresstype
        ydk::YLeaf cptpclockportcurrentpeeraddress; //type: binary
        ydk::YLeaf cptpclockportnumofassociatedports; //type: uint32

}; // CiscoPtpMib::Cptpclockporttable::Cptpclockportentry


class CiscoPtpMib::Cptpclockportdstable : public ydk::Entity
{
    public:
        Cptpclockportdstable();
        ~Cptpclockportdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockportdsentry; //type: CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry> > cptpclockportdsentry;
        
}; // CiscoPtpMib::Cptpclockportdstable


class CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry : public ydk::Entity
{
    public:
        Cptpclockportdsentry();
        ~Cptpclockportdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockportdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockportdsclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockportdsclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportdsportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportdsname; //type: string
        ydk::YLeaf cptpclockportdsportidentity; //type: binary
        ydk::YLeaf cptpclockportdsannouncementinterval; //type: int32
        ydk::YLeaf cptpclockportdsannouncercttimeout; //type: int32
        ydk::YLeaf cptpclockportdssyncinterval; //type: int32
        ydk::YLeaf cptpclockportdsmindelayreqinterval; //type: int32
        ydk::YLeaf cptpclockportdspeerdelayreqinterval; //type: int32
        ydk::YLeaf cptpclockportdsdelaymech; //type: Clockmechanismtype
        ydk::YLeaf cptpclockportdspeermeanpathdelay; //type: binary
        ydk::YLeaf cptpclockportdsgrantduration; //type: uint32
        ydk::YLeaf cptpclockportdsptpversion; //type: int32

}; // CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry


class CiscoPtpMib::Cptpclockportrunningtable : public ydk::Entity
{
    public:
        Cptpclockportrunningtable();
        ~Cptpclockportrunningtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockportrunningentry; //type: CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry> > cptpclockportrunningentry;
        
}; // CiscoPtpMib::Cptpclockportrunningtable


class CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry : public ydk::Entity
{
    public:
        Cptpclockportrunningentry();
        ~Cptpclockportrunningentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockportrunningdomainindex; //type: uint32
        ydk::YLeaf cptpclockportrunningclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockportrunningclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportrunningportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportrunningname; //type: string
        ydk::YLeaf cptpclockportrunningstate; //type: Clockportstate
        ydk::YLeaf cptpclockportrunningrole; //type: Clockroletype
        ydk::YLeaf cptpclockportrunninginterfaceindex; //type: int32
        ydk::YLeaf cptpclockportrunningipversion; //type: int32
        ydk::YLeaf cptpclockportrunningencapsulationtype; //type: int32
        ydk::YLeaf cptpclockportrunningtxmode; //type: Clocktxmodetype
        ydk::YLeaf cptpclockportrunningrxmode; //type: Clocktxmodetype
        ydk::YLeaf cptpclockportrunningpacketsreceived; //type: uint64
        ydk::YLeaf cptpclockportrunningpacketssent; //type: uint64

}; // CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry


class CiscoPtpMib::Cptpclockporttransdstable : public ydk::Entity
{
    public:
        Cptpclockporttransdstable();
        ~Cptpclockporttransdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockporttransdsentry; //type: CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry> > cptpclockporttransdsentry;
        
}; // CiscoPtpMib::Cptpclockporttransdstable


class CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry : public ydk::Entity
{
    public:
        Cptpclockporttransdsentry();
        ~Cptpclockporttransdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockporttransdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsportnumberindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsportidentity; //type: binary
        ydk::YLeaf cptpclockporttransdslogminpdelayreqint; //type: int32
        ydk::YLeaf cptpclockporttransdsfaultyflag; //type: boolean
        ydk::YLeaf cptpclockporttransdspeermeanpathdelay; //type: binary

}; // CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry


class CiscoPtpMib::Cptpclockportassociatetable : public ydk::Entity
{
    public:
        Cptpclockportassociatetable();
        ~Cptpclockportassociatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cptpclockportassociateentry; //type: CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry> > cptpclockportassociateentry;
        
}; // CiscoPtpMib::Cptpclockportassociatetable


class CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry : public ydk::Entity
{
    public:
        Cptpclockportassociateentry();
        ~Cptpclockportassociateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cptpclockportcurrentdomainindex; //type: uint32
        ydk::YLeaf cptpclockportcurrentclocktypeindex; //type: Clocktype
        ydk::YLeaf cptpclockportcurrentclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportcurrentportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportassociateportindex; //type: uint32
        ydk::YLeaf cptpclockportassociateaddresstype; //type: Inetaddresstype
        ydk::YLeaf cptpclockportassociateaddress; //type: binary
        ydk::YLeaf cptpclockportassociatepacketssent; //type: uint64
        ydk::YLeaf cptpclockportassociatepacketsreceived; //type: uint64
        ydk::YLeaf cptpclockportassociateinerrors; //type: uint64
        ydk::YLeaf cptpclockportassociateouterrors; //type: uint64

}; // CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry

class Clockmechanismtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf e2e;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf disabled;

};

class Clockroletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class Clocktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ordinaryClock;
        static const ydk::Enum::YLeaf boundaryClock;
        static const ydk::Enum::YLeaf transparentClock;
        static const ydk::Enum::YLeaf boundaryNode;

};

class Clocktxmodetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf multicastmix;

};

class Clockportstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf faulty;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf listening;
        static const ydk::Enum::YLeaf preMaster;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf uncalibrated;
        static const ydk::Enum::YLeaf slave;

};

class Clockstatetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf freerun;
        static const ydk::Enum::YLeaf holdover;
        static const ydk::Enum::YLeaf acquiring;
        static const ydk::Enum::YLeaf frequencyLocked;
        static const ydk::Enum::YLeaf phaseAligned;

};

class Clocktimesourcetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf atomicClock;
        static const ydk::Enum::YLeaf gps;
        static const ydk::Enum::YLeaf terrestrialRadio;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf handSet;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf internalOsillator;

};

class Clockqualityaccuracytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reserved00;
        static const ydk::Enum::YLeaf nanoSecond25;
        static const ydk::Enum::YLeaf nanoSecond100;
        static const ydk::Enum::YLeaf nanoSecond250;
        static const ydk::Enum::YLeaf microSec1;
        static const ydk::Enum::YLeaf microSec2dot5;
        static const ydk::Enum::YLeaf microSec10;
        static const ydk::Enum::YLeaf microSec25;
        static const ydk::Enum::YLeaf microSec100;
        static const ydk::Enum::YLeaf microSec250;
        static const ydk::Enum::YLeaf milliSec1;
        static const ydk::Enum::YLeaf milliSec2dot5;
        static const ydk::Enum::YLeaf milliSec10;
        static const ydk::Enum::YLeaf milliSec25;
        static const ydk::Enum::YLeaf milliSec100;
        static const ydk::Enum::YLeaf milliSec250;
        static const ydk::Enum::YLeaf second1;
        static const ydk::Enum::YLeaf second10;
        static const ydk::Enum::YLeaf secondGreater10;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf reserved255;

};

class Clockprofiletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf telecom;
        static const ydk::Enum::YLeaf vendorspecific;

};


}
}

#endif /* _CISCO_PTP_MIB_ */

