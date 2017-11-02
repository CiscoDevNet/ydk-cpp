#ifndef _CISCO_PTP_MIB_
#define _CISCO_PTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PTP_MIB {

class CISCOPTPMIB : public ydk::Entity
{
    public:
        CISCOPTPMIB();
        ~CISCOPTPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Ciscoptpmibsysteminfo; //type: CISCOPTPMIB::Ciscoptpmibsysteminfo
        class Cptpsystemtable; //type: CISCOPTPMIB::Cptpsystemtable
        class Cptpsystemdomaintable; //type: CISCOPTPMIB::Cptpsystemdomaintable
        class Cptpclocknodetable; //type: CISCOPTPMIB::Cptpclocknodetable
        class Cptpclockcurrentdstable; //type: CISCOPTPMIB::Cptpclockcurrentdstable
        class Cptpclockparentdstable; //type: CISCOPTPMIB::Cptpclockparentdstable
        class Cptpclockdefaultdstable; //type: CISCOPTPMIB::Cptpclockdefaultdstable
        class Cptpclockrunningtable; //type: CISCOPTPMIB::Cptpclockrunningtable
        class Cptpclocktimepropertiesdstable; //type: CISCOPTPMIB::Cptpclocktimepropertiesdstable
        class Cptpclocktransdefaultdstable; //type: CISCOPTPMIB::Cptpclocktransdefaultdstable
        class Cptpclockporttable; //type: CISCOPTPMIB::Cptpclockporttable
        class Cptpclockportdstable; //type: CISCOPTPMIB::Cptpclockportdstable
        class Cptpclockportrunningtable; //type: CISCOPTPMIB::Cptpclockportrunningtable
        class Cptpclockporttransdstable; //type: CISCOPTPMIB::Cptpclockporttransdstable
        class Cptpclockportassociatetable; //type: CISCOPTPMIB::Cptpclockportassociatetable

        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Ciscoptpmibsysteminfo> ciscoptpmibsysteminfo;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpsystemtable> cptpsystemtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpsystemdomaintable> cptpsystemdomaintable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclocknodetable> cptpclocknodetable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockcurrentdstable> cptpclockcurrentdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockparentdstable> cptpclockparentdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockdefaultdstable> cptpclockdefaultdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockrunningtable> cptpclockrunningtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclocktimepropertiesdstable> cptpclocktimepropertiesdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclocktransdefaultdstable> cptpclocktransdefaultdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockporttable> cptpclockporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockportdstable> cptpclockportdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockportrunningtable> cptpclockportrunningtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockporttransdstable> cptpclockporttransdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockportassociatetable> cptpclockportassociatetable;
        
}; // CISCOPTPMIB


class CISCOPTPMIB::Ciscoptpmibsysteminfo : public ydk::Entity
{
    public:
        Ciscoptpmibsysteminfo();
        ~Ciscoptpmibsysteminfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpsystemprofile; //type: ClockProfileType

}; // CISCOPTPMIB::Ciscoptpmibsysteminfo


class CISCOPTPMIB::Cptpsystemtable : public ydk::Entity
{
    public:
        Cptpsystemtable();
        ~Cptpsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpsystementry; //type: CISCOPTPMIB::Cptpsystemtable::Cptpsystementry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpsystemtable::Cptpsystementry> > cptpsystementry;
        
}; // CISCOPTPMIB::Cptpsystemtable


class CISCOPTPMIB::Cptpsystemtable::Cptpsystementry : public ydk::Entity
{
    public:
        Cptpsystementry();
        ~Cptpsystementry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpdomainindex; //type: uint32
        ydk::YLeaf cptpinstanceindex; //type: uint32
        ydk::YLeaf cptpdomainclockportstotal; //type: uint32
        ydk::YLeaf cptpdomainclockportphysicalinterfacestotal; //type: uint32

}; // CISCOPTPMIB::Cptpsystemtable::Cptpsystementry


class CISCOPTPMIB::Cptpsystemdomaintable : public ydk::Entity
{
    public:
        Cptpsystemdomaintable();
        ~Cptpsystemdomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpsystemdomainentry; //type: CISCOPTPMIB::Cptpsystemdomaintable::Cptpsystemdomainentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpsystemdomaintable::Cptpsystemdomainentry> > cptpsystemdomainentry;
        
}; // CISCOPTPMIB::Cptpsystemdomaintable


class CISCOPTPMIB::Cptpsystemdomaintable::Cptpsystemdomainentry : public ydk::Entity
{
    public:
        Cptpsystemdomainentry();
        ~Cptpsystemdomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpsystemdomainclocktypeindex; //type: ClockType
        ydk::YLeaf cptpsystemdomaintotals; //type: uint32

}; // CISCOPTPMIB::Cptpsystemdomaintable::Cptpsystemdomainentry


class CISCOPTPMIB::Cptpclocknodetable : public ydk::Entity
{
    public:
        Cptpclocknodetable();
        ~Cptpclocknodetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclocknodeentry; //type: CISCOPTPMIB::Cptpclocknodetable::Cptpclocknodeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclocknodetable::Cptpclocknodeentry> > cptpclocknodeentry;
        
}; // CISCOPTPMIB::Cptpclocknodetable


class CISCOPTPMIB::Cptpclocknodetable::Cptpclocknodeentry : public ydk::Entity
{
    public:
        Cptpclocknodeentry();
        ~Cptpclocknodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockdomainindex; //type: uint32
        ydk::YLeaf cptpclocktypeindex; //type: ClockType
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

}; // CISCOPTPMIB::Cptpclocknodetable::Cptpclocknodeentry


class CISCOPTPMIB::Cptpclockcurrentdstable : public ydk::Entity
{
    public:
        Cptpclockcurrentdstable();
        ~Cptpclockcurrentdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockcurrentdsentry; //type: CISCOPTPMIB::Cptpclockcurrentdstable::Cptpclockcurrentdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockcurrentdstable::Cptpclockcurrentdsentry> > cptpclockcurrentdsentry;
        
}; // CISCOPTPMIB::Cptpclockcurrentdstable


class CISCOPTPMIB::Cptpclockcurrentdstable::Cptpclockcurrentdsentry : public ydk::Entity
{
    public:
        Cptpclockcurrentdsentry();
        ~Cptpclockcurrentdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockcurrentdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockcurrentdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockcurrentdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockcurrentdsstepsremoved; //type: uint32
        ydk::YLeaf cptpclockcurrentdsoffsetfrommaster; //type: binary
        ydk::YLeaf cptpclockcurrentdsmeanpathdelay; //type: binary

}; // CISCOPTPMIB::Cptpclockcurrentdstable::Cptpclockcurrentdsentry


class CISCOPTPMIB::Cptpclockparentdstable : public ydk::Entity
{
    public:
        Cptpclockparentdstable();
        ~Cptpclockparentdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockparentdsentry; //type: CISCOPTPMIB::Cptpclockparentdstable::Cptpclockparentdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockparentdstable::Cptpclockparentdsentry> > cptpclockparentdsentry;
        
}; // CISCOPTPMIB::Cptpclockparentdstable


class CISCOPTPMIB::Cptpclockparentdstable::Cptpclockparentdsentry : public ydk::Entity
{
    public:
        Cptpclockparentdsentry();
        ~Cptpclockparentdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockparentdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockparentdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockparentdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockparentdsparentportidentity; //type: binary
        ydk::YLeaf cptpclockparentdsparentstats; //type: boolean
        ydk::YLeaf cptpclockparentdsoffset; //type: int32
        ydk::YLeaf cptpclockparentdsclockphchrate; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockidentity; //type: binary
        ydk::YLeaf cptpclockparentdsgmclockpriority1; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockpriority2; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockqualityclass; //type: uint32
        ydk::YLeaf cptpclockparentdsgmclockqualityaccuracy; //type: ClockQualityAccuracyType
        ydk::YLeaf cptpclockparentdsgmclockqualityoffset; //type: uint32

}; // CISCOPTPMIB::Cptpclockparentdstable::Cptpclockparentdsentry


class CISCOPTPMIB::Cptpclockdefaultdstable : public ydk::Entity
{
    public:
        Cptpclockdefaultdstable();
        ~Cptpclockdefaultdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockdefaultdsentry; //type: CISCOPTPMIB::Cptpclockdefaultdstable::Cptpclockdefaultdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockdefaultdstable::Cptpclockdefaultdsentry> > cptpclockdefaultdsentry;
        
}; // CISCOPTPMIB::Cptpclockdefaultdstable


class CISCOPTPMIB::Cptpclockdefaultdstable::Cptpclockdefaultdsentry : public ydk::Entity
{
    public:
        Cptpclockdefaultdsentry();
        ~Cptpclockdefaultdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockdefaultdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockdefaultdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockdefaultdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockdefaultdstwostepflag; //type: boolean
        ydk::YLeaf cptpclockdefaultdsclockidentity; //type: binary
        ydk::YLeaf cptpclockdefaultdspriority1; //type: int32
        ydk::YLeaf cptpclockdefaultdspriority2; //type: int32
        ydk::YLeaf cptpclockdefaultdsslaveonly; //type: boolean
        ydk::YLeaf cptpclockdefaultdsqualityclass; //type: uint32
        ydk::YLeaf cptpclockdefaultdsqualityaccuracy; //type: ClockQualityAccuracyType
        ydk::YLeaf cptpclockdefaultdsqualityoffset; //type: int32

}; // CISCOPTPMIB::Cptpclockdefaultdstable::Cptpclockdefaultdsentry


class CISCOPTPMIB::Cptpclockrunningtable : public ydk::Entity
{
    public:
        Cptpclockrunningtable();
        ~Cptpclockrunningtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockrunningentry; //type: CISCOPTPMIB::Cptpclockrunningtable::Cptpclockrunningentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockrunningtable::Cptpclockrunningentry> > cptpclockrunningentry;
        
}; // CISCOPTPMIB::Cptpclockrunningtable


class CISCOPTPMIB::Cptpclockrunningtable::Cptpclockrunningentry : public ydk::Entity
{
    public:
        Cptpclockrunningentry();
        ~Cptpclockrunningentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockrunningdomainindex; //type: uint32
        ydk::YLeaf cptpclockrunningclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockrunninginstanceindex; //type: uint32
        ydk::YLeaf cptpclockrunningstate; //type: ClockStateType
        ydk::YLeaf cptpclockrunningpacketssent; //type: uint64
        ydk::YLeaf cptpclockrunningpacketsreceived; //type: uint64

}; // CISCOPTPMIB::Cptpclockrunningtable::Cptpclockrunningentry


class CISCOPTPMIB::Cptpclocktimepropertiesdstable : public ydk::Entity
{
    public:
        Cptpclocktimepropertiesdstable();
        ~Cptpclocktimepropertiesdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclocktimepropertiesdsentry; //type: CISCOPTPMIB::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry> > cptpclocktimepropertiesdsentry;
        
}; // CISCOPTPMIB::Cptpclocktimepropertiesdstable


class CISCOPTPMIB::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry : public ydk::Entity
{
    public:
        Cptpclocktimepropertiesdsentry();
        ~Cptpclocktimepropertiesdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclocktimepropertiesdsdomainindex; //type: uint32
        ydk::YLeaf cptpclocktimepropertiesdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclocktimepropertiesdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclocktimepropertiesdscurrentutcoffsetvalid; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdscurrentutcoffset; //type: int32
        ydk::YLeaf cptpclocktimepropertiesdsleap59; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsleap61; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdstimetraceable; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsfreqtraceable; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsptptimescale; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdssource; //type: ClockTimeSourceType

}; // CISCOPTPMIB::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry


class CISCOPTPMIB::Cptpclocktransdefaultdstable : public ydk::Entity
{
    public:
        Cptpclocktransdefaultdstable();
        ~Cptpclocktransdefaultdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclocktransdefaultdsentry; //type: CISCOPTPMIB::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry> > cptpclocktransdefaultdsentry;
        
}; // CISCOPTPMIB::Cptpclocktransdefaultdstable


class CISCOPTPMIB::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry : public ydk::Entity
{
    public:
        Cptpclocktransdefaultdsentry();
        ~Cptpclocktransdefaultdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclocktransdefaultdsdomainindex; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsclockidentity; //type: binary
        ydk::YLeaf cptpclocktransdefaultdsnumofports; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsdelay; //type: ClockMechanismType
        ydk::YLeaf cptpclocktransdefaultdsprimarydomain; //type: int32

}; // CISCOPTPMIB::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry


class CISCOPTPMIB::Cptpclockporttable : public ydk::Entity
{
    public:
        Cptpclockporttable();
        ~Cptpclockporttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockportentry; //type: CISCOPTPMIB::Cptpclockporttable::Cptpclockportentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockporttable::Cptpclockportentry> > cptpclockportentry;
        
}; // CISCOPTPMIB::Cptpclockporttable


class CISCOPTPMIB::Cptpclockporttable::Cptpclockportentry : public ydk::Entity
{
    public:
        Cptpclockportentry();
        ~Cptpclockportentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockportdomainindex; //type: uint32
        ydk::YLeaf cptpclockportclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockporttableportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportname; //type: string
        ydk::YLeaf cptpclockportrole; //type: ClockRoleType
        ydk::YLeaf cptpclockportsynconestep; //type: boolean
        ydk::YLeaf cptpclockportcurrentpeeraddresstype; //type: InetAddressType
        ydk::YLeaf cptpclockportcurrentpeeraddress; //type: binary
        ydk::YLeaf cptpclockportnumofassociatedports; //type: uint32

}; // CISCOPTPMIB::Cptpclockporttable::Cptpclockportentry


class CISCOPTPMIB::Cptpclockportdstable : public ydk::Entity
{
    public:
        Cptpclockportdstable();
        ~Cptpclockportdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockportdsentry; //type: CISCOPTPMIB::Cptpclockportdstable::Cptpclockportdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockportdstable::Cptpclockportdsentry> > cptpclockportdsentry;
        
}; // CISCOPTPMIB::Cptpclockportdstable


class CISCOPTPMIB::Cptpclockportdstable::Cptpclockportdsentry : public ydk::Entity
{
    public:
        Cptpclockportdsentry();
        ~Cptpclockportdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockportdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockportdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportdsclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportdsportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportdsname; //type: string
        ydk::YLeaf cptpclockportdsportidentity; //type: binary
        ydk::YLeaf cptpclockportdsannouncementinterval; //type: int32
        ydk::YLeaf cptpclockportdsannouncercttimeout; //type: int32
        ydk::YLeaf cptpclockportdssyncinterval; //type: int32
        ydk::YLeaf cptpclockportdsmindelayreqinterval; //type: int32
        ydk::YLeaf cptpclockportdspeerdelayreqinterval; //type: int32
        ydk::YLeaf cptpclockportdsdelaymech; //type: ClockMechanismType
        ydk::YLeaf cptpclockportdspeermeanpathdelay; //type: binary
        ydk::YLeaf cptpclockportdsgrantduration; //type: uint32
        ydk::YLeaf cptpclockportdsptpversion; //type: int32

}; // CISCOPTPMIB::Cptpclockportdstable::Cptpclockportdsentry


class CISCOPTPMIB::Cptpclockportrunningtable : public ydk::Entity
{
    public:
        Cptpclockportrunningtable();
        ~Cptpclockportrunningtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockportrunningentry; //type: CISCOPTPMIB::Cptpclockportrunningtable::Cptpclockportrunningentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockportrunningtable::Cptpclockportrunningentry> > cptpclockportrunningentry;
        
}; // CISCOPTPMIB::Cptpclockportrunningtable


class CISCOPTPMIB::Cptpclockportrunningtable::Cptpclockportrunningentry : public ydk::Entity
{
    public:
        Cptpclockportrunningentry();
        ~Cptpclockportrunningentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockportrunningdomainindex; //type: uint32
        ydk::YLeaf cptpclockportrunningclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportrunningclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportrunningportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportrunningname; //type: string
        ydk::YLeaf cptpclockportrunningstate; //type: ClockPortState
        ydk::YLeaf cptpclockportrunningrole; //type: ClockRoleType
        ydk::YLeaf cptpclockportrunninginterfaceindex; //type: int32
        ydk::YLeaf cptpclockportrunningipversion; //type: int32
        ydk::YLeaf cptpclockportrunningencapsulationtype; //type: int32
        ydk::YLeaf cptpclockportrunningtxmode; //type: ClockTxModeType
        ydk::YLeaf cptpclockportrunningrxmode; //type: ClockTxModeType
        ydk::YLeaf cptpclockportrunningpacketsreceived; //type: uint64
        ydk::YLeaf cptpclockportrunningpacketssent; //type: uint64

}; // CISCOPTPMIB::Cptpclockportrunningtable::Cptpclockportrunningentry


class CISCOPTPMIB::Cptpclockporttransdstable : public ydk::Entity
{
    public:
        Cptpclockporttransdstable();
        ~Cptpclockporttransdstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockporttransdsentry; //type: CISCOPTPMIB::Cptpclockporttransdstable::Cptpclockporttransdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockporttransdstable::Cptpclockporttransdsentry> > cptpclockporttransdsentry;
        
}; // CISCOPTPMIB::Cptpclockporttransdstable


class CISCOPTPMIB::Cptpclockporttransdstable::Cptpclockporttransdsentry : public ydk::Entity
{
    public:
        Cptpclockporttransdsentry();
        ~Cptpclockporttransdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockporttransdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsportnumberindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsportidentity; //type: binary
        ydk::YLeaf cptpclockporttransdslogminpdelayreqint; //type: int32
        ydk::YLeaf cptpclockporttransdsfaultyflag; //type: boolean
        ydk::YLeaf cptpclockporttransdspeermeanpathdelay; //type: binary

}; // CISCOPTPMIB::Cptpclockporttransdstable::Cptpclockporttransdsentry


class CISCOPTPMIB::Cptpclockportassociatetable : public ydk::Entity
{
    public:
        Cptpclockportassociatetable();
        ~Cptpclockportassociatetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cptpclockportassociateentry; //type: CISCOPTPMIB::Cptpclockportassociatetable::Cptpclockportassociateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::Cptpclockportassociatetable::Cptpclockportassociateentry> > cptpclockportassociateentry;
        
}; // CISCOPTPMIB::Cptpclockportassociatetable


class CISCOPTPMIB::Cptpclockportassociatetable::Cptpclockportassociateentry : public ydk::Entity
{
    public:
        Cptpclockportassociateentry();
        ~Cptpclockportassociateentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cptpclockportcurrentdomainindex; //type: uint32
        ydk::YLeaf cptpclockportcurrentclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportcurrentclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportcurrentportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportassociateportindex; //type: uint32
        ydk::YLeaf cptpclockportassociateaddresstype; //type: InetAddressType
        ydk::YLeaf cptpclockportassociateaddress; //type: binary
        ydk::YLeaf cptpclockportassociatepacketssent; //type: uint64
        ydk::YLeaf cptpclockportassociatepacketsreceived; //type: uint64
        ydk::YLeaf cptpclockportassociateinerrors; //type: uint64
        ydk::YLeaf cptpclockportassociateouterrors; //type: uint64

}; // CISCOPTPMIB::Cptpclockportassociatetable::Cptpclockportassociateentry

class ClockMechanismType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf e2e;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf disabled;

};

class ClockPortState : public ydk::Enum
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

class ClockProfileType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf telecom;
        static const ydk::Enum::YLeaf vendorspecific;

};

class ClockQualityAccuracyType : public ydk::Enum
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

class ClockRoleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class ClockStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf freerun;
        static const ydk::Enum::YLeaf holdover;
        static const ydk::Enum::YLeaf acquiring;
        static const ydk::Enum::YLeaf frequencyLocked;
        static const ydk::Enum::YLeaf phaseAligned;

};

class ClockTimeSourceType : public ydk::Enum
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

class ClockTxModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf multicastmix;

};

class ClockType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ordinaryClock;
        static const ydk::Enum::YLeaf boundaryClock;
        static const ydk::Enum::YLeaf transparentClock;
        static const ydk::Enum::YLeaf boundaryNode;

};


}
}

#endif /* _CISCO_PTP_MIB_ */

