#ifndef _CISCO_QOS_PIB_MIB_
#define _CISCO_QOS_PIB_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_QOS_PIB_MIB {

class CISCOQOSPIBMIB : public ydk::Entity
{
    public:
        CISCOQOSPIBMIB();
        ~CISCOQOSPIBMIB();

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

        class Qosdevicepibincarnationtable; //type: CISCOQOSPIBMIB::Qosdevicepibincarnationtable
        class Qosdeviceattributetable; //type: CISCOQOSPIBMIB::Qosdeviceattributetable
        class Qosinterfacetypetable; //type: CISCOQOSPIBMIB::Qosinterfacetypetable
        class Qosdiffservmappingtable; //type: CISCOQOSPIBMIB::Qosdiffservmappingtable
        class Qoscostodscptable; //type: CISCOQOSPIBMIB::Qoscostodscptable
        class Qosunmatchedpolicytable; //type: CISCOQOSPIBMIB::Qosunmatchedpolicytable
        class Qospolicertable; //type: CISCOQOSPIBMIB::Qospolicertable
        class Qosaggregatetable; //type: CISCOQOSPIBMIB::Qosaggregatetable
        class Qosmacclassificationtable; //type: CISCOQOSPIBMIB::Qosmacclassificationtable
        class Qosipacetable; //type: CISCOQOSPIBMIB::Qosipacetable
        class Qosipacldefinitiontable; //type: CISCOQOSPIBMIB::Qosipacldefinitiontable
        class Qosipaclactiontable; //type: CISCOQOSPIBMIB::Qosipaclactiontable
        class Qosifschedulingpreferencestable; //type: CISCOQOSPIBMIB::Qosifschedulingpreferencestable
        class Qosifdroppreferencetable; //type: CISCOQOSPIBMIB::Qosifdroppreferencetable
        class Qosifdscpassignmenttable; //type: CISCOQOSPIBMIB::Qosifdscpassignmenttable
        class Qosifredtable; //type: CISCOQOSPIBMIB::Qosifredtable
        class Qosiftaildroptable; //type: CISCOQOSPIBMIB::Qosiftaildroptable
        class Qosifweightstable; //type: CISCOQOSPIBMIB::Qosifweightstable

        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosaggregatetable> qosaggregatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qoscostodscptable> qoscostodscptable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosdeviceattributetable> qosdeviceattributetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosdevicepibincarnationtable> qosdevicepibincarnationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosdiffservmappingtable> qosdiffservmappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifdroppreferencetable> qosifdroppreferencetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifdscpassignmenttable> qosifdscpassignmenttable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifredtable> qosifredtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifschedulingpreferencestable> qosifschedulingpreferencestable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosiftaildroptable> qosiftaildroptable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifweightstable> qosifweightstable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosinterfacetypetable> qosinterfacetypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosipacetable> qosipacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosipaclactiontable> qosipaclactiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosipacldefinitiontable> qosipacldefinitiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosmacclassificationtable> qosmacclassificationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qospolicertable> qospolicertable;
        std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosunmatchedpolicytable> qosunmatchedpolicytable;
        
}; // CISCOQOSPIBMIB


class CISCOQOSPIBMIB::Qosaggregatetable : public ydk::Entity
{
    public:
        Qosaggregatetable();
        ~Qosaggregatetable();

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

        class Qosaggregateentry; //type: CISCOQOSPIBMIB::Qosaggregatetable::Qosaggregateentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosaggregatetable::Qosaggregateentry> > qosaggregateentry;
        
}; // CISCOQOSPIBMIB::Qosaggregatetable


class CISCOQOSPIBMIB::Qosaggregatetable::Qosaggregateentry : public ydk::Entity
{
    public:
        Qosaggregateentry();
        ~Qosaggregateentry();

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

        ydk::YLeaf qosaggregateid; //type: uint32
        ydk::YLeaf qosaggregatepolicerid; //type: uint32

}; // CISCOQOSPIBMIB::Qosaggregatetable::Qosaggregateentry


class CISCOQOSPIBMIB::Qoscostodscptable : public ydk::Entity
{
    public:
        Qoscostodscptable();
        ~Qoscostodscptable();

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

        class Qoscostodscpentry; //type: CISCOQOSPIBMIB::Qoscostodscptable::Qoscostodscpentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qoscostodscptable::Qoscostodscpentry> > qoscostodscpentry;
        
}; // CISCOQOSPIBMIB::Qoscostodscptable


class CISCOQOSPIBMIB::Qoscostodscptable::Qoscostodscpentry : public ydk::Entity
{
    public:
        Qoscostodscpentry();
        ~Qoscostodscpentry();

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

        ydk::YLeaf qoscostodscpcos; //type: int32
        ydk::YLeaf qoscostodscpdscp; //type: int32

}; // CISCOQOSPIBMIB::Qoscostodscptable::Qoscostodscpentry


class CISCOQOSPIBMIB::Qosdeviceattributetable : public ydk::Entity
{
    public:
        Qosdeviceattributetable();
        ~Qosdeviceattributetable();

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

        class Qosdeviceattributeentry; //type: CISCOQOSPIBMIB::Qosdeviceattributetable::Qosdeviceattributeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosdeviceattributetable::Qosdeviceattributeentry> > qosdeviceattributeentry;
        
}; // CISCOQOSPIBMIB::Qosdeviceattributetable


class CISCOQOSPIBMIB::Qosdeviceattributetable::Qosdeviceattributeentry : public ydk::Entity
{
    public:
        Qosdeviceattributeentry();
        ~Qosdeviceattributeentry();

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

        ydk::YLeaf qosdeviceattributeid; //type: uint32
        ydk::YLeaf qosdevicepepdomain; //type: string
        ydk::YLeaf qosdeviceprimarypdp; //type: string
        ydk::YLeaf qosdevicesecondarypdp; //type: string
        ydk::YLeaf qosdevicemaxmessagesize; //type: uint32
        ydk::YLeaf qosdevicecapabilities; //type: Qosdevicecapabilities

}; // CISCOQOSPIBMIB::Qosdeviceattributetable::Qosdeviceattributeentry


class CISCOQOSPIBMIB::Qosdevicepibincarnationtable : public ydk::Entity
{
    public:
        Qosdevicepibincarnationtable();
        ~Qosdevicepibincarnationtable();

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

        class Qosdevicepibincarnationentry; //type: CISCOQOSPIBMIB::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry> > qosdevicepibincarnationentry;
        
}; // CISCOQOSPIBMIB::Qosdevicepibincarnationtable


class CISCOQOSPIBMIB::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry : public ydk::Entity
{
    public:
        Qosdevicepibincarnationentry();
        ~Qosdevicepibincarnationentry();

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

        ydk::YLeaf qosdeviceincarnationid; //type: uint32
        ydk::YLeaf qosdevicepdpname; //type: string
        ydk::YLeaf qosdevicepibincarnation; //type: binary
        ydk::YLeaf qosdevicepibttl; //type: uint32

}; // CISCOQOSPIBMIB::Qosdevicepibincarnationtable::Qosdevicepibincarnationentry


class CISCOQOSPIBMIB::Qosdiffservmappingtable : public ydk::Entity
{
    public:
        Qosdiffservmappingtable();
        ~Qosdiffservmappingtable();

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

        class Qosdiffservmappingentry; //type: CISCOQOSPIBMIB::Qosdiffservmappingtable::Qosdiffservmappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosdiffservmappingtable::Qosdiffservmappingentry> > qosdiffservmappingentry;
        
}; // CISCOQOSPIBMIB::Qosdiffservmappingtable


class CISCOQOSPIBMIB::Qosdiffservmappingtable::Qosdiffservmappingentry : public ydk::Entity
{
    public:
        Qosdiffservmappingentry();
        ~Qosdiffservmappingentry();

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

        ydk::YLeaf qosdscp; //type: int32
        ydk::YLeaf qosmarkeddscp; //type: int32
        ydk::YLeaf qosl2cos; //type: int32

}; // CISCOQOSPIBMIB::Qosdiffservmappingtable::Qosdiffservmappingentry


class CISCOQOSPIBMIB::Qosifdroppreferencetable : public ydk::Entity
{
    public:
        Qosifdroppreferencetable();
        ~Qosifdroppreferencetable();

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

        class Qosifdroppreferenceentry; //type: CISCOQOSPIBMIB::Qosifdroppreferencetable::Qosifdroppreferenceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifdroppreferencetable::Qosifdroppreferenceentry> > qosifdroppreferenceentry;
        
}; // CISCOQOSPIBMIB::Qosifdroppreferencetable


class CISCOQOSPIBMIB::Qosifdroppreferencetable::Qosifdroppreferenceentry : public ydk::Entity
{
    public:
        Qosifdroppreferenceentry();
        ~Qosifdroppreferenceentry();

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

        ydk::YLeaf qosifdroppreferenceid; //type: uint32
        ydk::YLeaf qosifdroproles; //type: binary
        ydk::YLeaf qosifdroppreference; //type: int32
        ydk::YLeaf qosifdropdiscipline; //type: Qosifdropdiscipline
        class Qosifdropdiscipline;

}; // CISCOQOSPIBMIB::Qosifdroppreferencetable::Qosifdroppreferenceentry


class CISCOQOSPIBMIB::Qosifdscpassignmenttable : public ydk::Entity
{
    public:
        Qosifdscpassignmenttable();
        ~Qosifdscpassignmenttable();

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

        class Qosifdscpassignmententry; //type: CISCOQOSPIBMIB::Qosifdscpassignmenttable::Qosifdscpassignmententry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifdscpassignmenttable::Qosifdscpassignmententry> > qosifdscpassignmententry;
        
}; // CISCOQOSPIBMIB::Qosifdscpassignmenttable


class CISCOQOSPIBMIB::Qosifdscpassignmenttable::Qosifdscpassignmententry : public ydk::Entity
{
    public:
        Qosifdscpassignmententry();
        ~Qosifdscpassignmententry();

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

        ydk::YLeaf qosifdscpassignmentid; //type: uint32
        ydk::YLeaf qosifdscproles; //type: binary
        ydk::YLeaf qosifqueuetype; //type: QosInterfaceQueueType
        ydk::YLeaf qosifdscp; //type: int32
        ydk::YLeaf qosifqueue; //type: int32
        ydk::YLeaf qosifthresholdset; //type: int32

}; // CISCOQOSPIBMIB::Qosifdscpassignmenttable::Qosifdscpassignmententry


class CISCOQOSPIBMIB::Qosifredtable : public ydk::Entity
{
    public:
        Qosifredtable();
        ~Qosifredtable();

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

        class Qosifredentry; //type: CISCOQOSPIBMIB::Qosifredtable::Qosifredentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifredtable::Qosifredentry> > qosifredentry;
        
}; // CISCOQOSPIBMIB::Qosifredtable


class CISCOQOSPIBMIB::Qosifredtable::Qosifredentry : public ydk::Entity
{
    public:
        Qosifredentry();
        ~Qosifredentry();

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

        ydk::YLeaf qosifredid; //type: uint32
        ydk::YLeaf qosifredroles; //type: binary
        ydk::YLeaf qosifrednumthresholdsets; //type: ThresholdSetRange
        ydk::YLeaf qosifredthresholdset; //type: int32
        ydk::YLeaf qosifredthresholdsetlower; //type: int32
        ydk::YLeaf qosifredthresholdsetupper; //type: int32

}; // CISCOQOSPIBMIB::Qosifredtable::Qosifredentry


class CISCOQOSPIBMIB::Qosifschedulingpreferencestable : public ydk::Entity
{
    public:
        Qosifschedulingpreferencestable();
        ~Qosifschedulingpreferencestable();

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

        class Qosifschedulingpreferenceentry; //type: CISCOQOSPIBMIB::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry> > qosifschedulingpreferenceentry;
        
}; // CISCOQOSPIBMIB::Qosifschedulingpreferencestable


class CISCOQOSPIBMIB::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry : public ydk::Entity
{
    public:
        Qosifschedulingpreferenceentry();
        ~Qosifschedulingpreferenceentry();

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

        ydk::YLeaf qosifschedulingpreferenceid; //type: uint32
        ydk::YLeaf qosifschedulingroles; //type: binary
        ydk::YLeaf qosifschedulingpreference; //type: int32
        ydk::YLeaf qosifschedulingdiscipline; //type: Qosifschedulingdiscipline
        ydk::YLeaf qosifschedulingqueuetype; //type: QosInterfaceQueueType
        class Qosifschedulingdiscipline;

}; // CISCOQOSPIBMIB::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry


class CISCOQOSPIBMIB::Qosiftaildroptable : public ydk::Entity
{
    public:
        Qosiftaildroptable();
        ~Qosiftaildroptable();

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

        class Qosiftaildropentry; //type: CISCOQOSPIBMIB::Qosiftaildroptable::Qosiftaildropentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosiftaildroptable::Qosiftaildropentry> > qosiftaildropentry;
        
}; // CISCOQOSPIBMIB::Qosiftaildroptable


class CISCOQOSPIBMIB::Qosiftaildroptable::Qosiftaildropentry : public ydk::Entity
{
    public:
        Qosiftaildropentry();
        ~Qosiftaildropentry();

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

        ydk::YLeaf qosiftaildropid; //type: uint32
        ydk::YLeaf qosiftaildroproles; //type: binary
        ydk::YLeaf qosiftaildropnumthresholdsets; //type: ThresholdSetRange
        ydk::YLeaf qosiftaildropthresholdset; //type: int32
        ydk::YLeaf qosiftaildropthresholdsetvalue; //type: int32

}; // CISCOQOSPIBMIB::Qosiftaildroptable::Qosiftaildropentry


class CISCOQOSPIBMIB::Qosifweightstable : public ydk::Entity
{
    public:
        Qosifweightstable();
        ~Qosifweightstable();

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

        class Qosifweightsentry; //type: CISCOQOSPIBMIB::Qosifweightstable::Qosifweightsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosifweightstable::Qosifweightsentry> > qosifweightsentry;
        
}; // CISCOQOSPIBMIB::Qosifweightstable


class CISCOQOSPIBMIB::Qosifweightstable::Qosifweightsentry : public ydk::Entity
{
    public:
        Qosifweightsentry();
        ~Qosifweightsentry();

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

        ydk::YLeaf qosifweightsid; //type: uint32
        ydk::YLeaf qosifweightsroles; //type: binary
        ydk::YLeaf qosifweightsnumqueues; //type: QueueRange
        ydk::YLeaf qosifweightsqueue; //type: int32
        ydk::YLeaf qosifweightsdrainsize; //type: uint32
        ydk::YLeaf qosifweightsqueuesize; //type: uint32

}; // CISCOQOSPIBMIB::Qosifweightstable::Qosifweightsentry


class CISCOQOSPIBMIB::Qosinterfacetypetable : public ydk::Entity
{
    public:
        Qosinterfacetypetable();
        ~Qosinterfacetypetable();

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

        class Qosinterfacetypeentry; //type: CISCOQOSPIBMIB::Qosinterfacetypetable::Qosinterfacetypeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosinterfacetypetable::Qosinterfacetypeentry> > qosinterfacetypeentry;
        
}; // CISCOQOSPIBMIB::Qosinterfacetypetable


class CISCOQOSPIBMIB::Qosinterfacetypetable::Qosinterfacetypeentry : public ydk::Entity
{
    public:
        Qosinterfacetypeentry();
        ~Qosinterfacetypeentry();

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

        ydk::YLeaf qosinterfacetypeid; //type: uint32
        ydk::YLeaf qosinterfacequeuetype; //type: QosInterfaceQueueType
        ydk::YLeaf qosinterfacetyperoles; //type: binary
        ydk::YLeaf qosinterfacetypecapabilities; //type: QosInterfaceTypeCapabilities

}; // CISCOQOSPIBMIB::Qosinterfacetypetable::Qosinterfacetypeentry


class CISCOQOSPIBMIB::Qosipacetable : public ydk::Entity
{
    public:
        Qosipacetable();
        ~Qosipacetable();

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

        class Qosipaceentry; //type: CISCOQOSPIBMIB::Qosipacetable::Qosipaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosipacetable::Qosipaceentry> > qosipaceentry;
        
}; // CISCOQOSPIBMIB::Qosipacetable


class CISCOQOSPIBMIB::Qosipacetable::Qosipaceentry : public ydk::Entity
{
    public:
        Qosipaceentry();
        ~Qosipaceentry();

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

        ydk::YLeaf qosipaceid; //type: uint32
        ydk::YLeaf qosipacedstaddr; //type: string
        ydk::YLeaf qosipacedstaddrmask; //type: string
        ydk::YLeaf qosipacesrcaddr; //type: string
        ydk::YLeaf qosipacesrcaddrmask; //type: string
        ydk::YLeaf qosipacedscpmin; //type: int32
        ydk::YLeaf qosipacedscpmax; //type: int32
        ydk::YLeaf qosipaceprotocol; //type: int32
        ydk::YLeaf qosipacedstl4portmin; //type: int32
        ydk::YLeaf qosipacedstl4portmax; //type: int32
        ydk::YLeaf qosipacesrcl4portmin; //type: int32
        ydk::YLeaf qosipacesrcl4portmax; //type: int32
        ydk::YLeaf qosipacepermit; //type: boolean

}; // CISCOQOSPIBMIB::Qosipacetable::Qosipaceentry


class CISCOQOSPIBMIB::Qosipaclactiontable : public ydk::Entity
{
    public:
        Qosipaclactiontable();
        ~Qosipaclactiontable();

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

        class Qosipaclactionentry; //type: CISCOQOSPIBMIB::Qosipaclactiontable::Qosipaclactionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosipaclactiontable::Qosipaclactionentry> > qosipaclactionentry;
        
}; // CISCOQOSPIBMIB::Qosipaclactiontable


class CISCOQOSPIBMIB::Qosipaclactiontable::Qosipaclactionentry : public ydk::Entity
{
    public:
        Qosipaclactionentry();
        ~Qosipaclactionentry();

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

        ydk::YLeaf qosipaclactionid; //type: uint32
        ydk::YLeaf qosipaclactaclid; //type: uint32
        ydk::YLeaf qosipaclinterfaceroles; //type: binary
        ydk::YLeaf qosipaclinterfacedirection; //type: Qosipaclinterfacedirection
        ydk::YLeaf qosipaclorder; //type: uint32
        ydk::YLeaf qosipacldscp; //type: int32
        ydk::YLeaf qosipacldscptrusted; //type: boolean
        ydk::YLeaf qosipaclmicroflowpolicerid; //type: uint32
        ydk::YLeaf qosipaclaggregateid; //type: uint32
        class Qosipaclinterfacedirection;

}; // CISCOQOSPIBMIB::Qosipaclactiontable::Qosipaclactionentry


class CISCOQOSPIBMIB::Qosipacldefinitiontable : public ydk::Entity
{
    public:
        Qosipacldefinitiontable();
        ~Qosipacldefinitiontable();

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

        class Qosipacldefinitionentry; //type: CISCOQOSPIBMIB::Qosipacldefinitiontable::Qosipacldefinitionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosipacldefinitiontable::Qosipacldefinitionentry> > qosipacldefinitionentry;
        
}; // CISCOQOSPIBMIB::Qosipacldefinitiontable


class CISCOQOSPIBMIB::Qosipacldefinitiontable::Qosipacldefinitionentry : public ydk::Entity
{
    public:
        Qosipacldefinitionentry();
        ~Qosipacldefinitionentry();

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

        ydk::YLeaf qosipacldefinitionid; //type: uint32
        ydk::YLeaf qosipaclid; //type: uint32
        ydk::YLeaf qosipaceorder; //type: uint32
        ydk::YLeaf qosipacldefaceid; //type: uint32

}; // CISCOQOSPIBMIB::Qosipacldefinitiontable::Qosipacldefinitionentry


class CISCOQOSPIBMIB::Qosmacclassificationtable : public ydk::Entity
{
    public:
        Qosmacclassificationtable();
        ~Qosmacclassificationtable();

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

        class Qosmacclassificationentry; //type: CISCOQOSPIBMIB::Qosmacclassificationtable::Qosmacclassificationentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosmacclassificationtable::Qosmacclassificationentry> > qosmacclassificationentry;
        
}; // CISCOQOSPIBMIB::Qosmacclassificationtable


class CISCOQOSPIBMIB::Qosmacclassificationtable::Qosmacclassificationentry : public ydk::Entity
{
    public:
        Qosmacclassificationentry();
        ~Qosmacclassificationentry();

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

        ydk::YLeaf qosmacclassificationid; //type: uint32
        ydk::YLeaf qosdstmacvlan; //type: int32
        ydk::YLeaf qosdstmacaddress; //type: string
        ydk::YLeaf qosdstmaccos; //type: int32

}; // CISCOQOSPIBMIB::Qosmacclassificationtable::Qosmacclassificationentry


class CISCOQOSPIBMIB::Qospolicertable : public ydk::Entity
{
    public:
        Qospolicertable();
        ~Qospolicertable();

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

        class Qospolicerentry; //type: CISCOQOSPIBMIB::Qospolicertable::Qospolicerentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qospolicertable::Qospolicerentry> > qospolicerentry;
        
}; // CISCOQOSPIBMIB::Qospolicertable


class CISCOQOSPIBMIB::Qospolicertable::Qospolicerentry : public ydk::Entity
{
    public:
        Qospolicerentry();
        ~Qospolicerentry();

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

        ydk::YLeaf qospolicerid; //type: uint32
        ydk::YLeaf qospolicerrate; //type: uint32
        ydk::YLeaf qospolicernormalburst; //type: uint32
        ydk::YLeaf qospolicerexcessburst; //type: uint32
        ydk::YLeaf qospoliceraction; //type: Qospoliceraction
        class Qospoliceraction;

}; // CISCOQOSPIBMIB::Qospolicertable::Qospolicerentry


class CISCOQOSPIBMIB::Qosunmatchedpolicytable : public ydk::Entity
{
    public:
        Qosunmatchedpolicytable();
        ~Qosunmatchedpolicytable();

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

        class Qosunmatchedpolicyentry; //type: CISCOQOSPIBMIB::Qosunmatchedpolicytable::Qosunmatchedpolicyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_QOS_PIB_MIB::CISCOQOSPIBMIB::Qosunmatchedpolicytable::Qosunmatchedpolicyentry> > qosunmatchedpolicyentry;
        
}; // CISCOQOSPIBMIB::Qosunmatchedpolicytable


class CISCOQOSPIBMIB::Qosunmatchedpolicytable::Qosunmatchedpolicyentry : public ydk::Entity
{
    public:
        Qosunmatchedpolicyentry();
        ~Qosunmatchedpolicyentry();

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

        ydk::YLeaf qosunmatchedpolicyid; //type: uint32
        ydk::YLeaf qosunmatchedpolicyrole; //type: binary
        ydk::YLeaf qosunmatchedpolicydirection; //type: Qosunmatchedpolicydirection
        ydk::YLeaf qosunmatchedpolicydscp; //type: int32
        ydk::YLeaf qosunmatchedpolicydscptrusted; //type: boolean
        ydk::YLeaf qosunmatchpolmicroflowpolicerid; //type: uint32
        ydk::YLeaf qosunmatchedpolicyaggregateid; //type: uint32
        class Qosunmatchedpolicydirection;

}; // CISCOQOSPIBMIB::Qosunmatchedpolicytable::Qosunmatchedpolicyentry

class QueueRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneQ;
        static const ydk::Enum::YLeaf twoQ;
        static const ydk::Enum::YLeaf threeQ;
        static const ydk::Enum::YLeaf fourQ;
        static const ydk::Enum::YLeaf eightQ;
        static const ydk::Enum::YLeaf sixteenQ;
        static const ydk::Enum::YLeaf thirtyTwoQ;
        static const ydk::Enum::YLeaf sixtyFourQ;

};

class ThresholdSetRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf zeroT;
        static const ydk::Enum::YLeaf oneT;
        static const ydk::Enum::YLeaf twoT;
        static const ydk::Enum::YLeaf fourT;
        static const ydk::Enum::YLeaf eightT;

};

class QosInterfaceQueueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneQ1t;
        static const ydk::Enum::YLeaf oneQ2t;
        static const ydk::Enum::YLeaf oneQ4t;
        static const ydk::Enum::YLeaf oneQ8t;
        static const ydk::Enum::YLeaf twoQ1t;
        static const ydk::Enum::YLeaf twoQ2t;
        static const ydk::Enum::YLeaf twoQ4t;
        static const ydk::Enum::YLeaf twoQ8t;
        static const ydk::Enum::YLeaf threeQ1t;
        static const ydk::Enum::YLeaf threeQ2t;
        static const ydk::Enum::YLeaf threeQ4t;
        static const ydk::Enum::YLeaf threeQ8t;
        static const ydk::Enum::YLeaf fourQ1t;
        static const ydk::Enum::YLeaf fourQ2t;
        static const ydk::Enum::YLeaf fourQ4t;
        static const ydk::Enum::YLeaf fourQ8t;
        static const ydk::Enum::YLeaf eightQ1t;
        static const ydk::Enum::YLeaf eightQ2t;
        static const ydk::Enum::YLeaf eightQ4t;
        static const ydk::Enum::YLeaf eightQ8t;
        static const ydk::Enum::YLeaf sixteenQ1t;
        static const ydk::Enum::YLeaf sixteenQ2t;
        static const ydk::Enum::YLeaf sixteenQ4t;
        static const ydk::Enum::YLeaf sixtyfourQ1t;
        static const ydk::Enum::YLeaf sixtyfourQ2t;
        static const ydk::Enum::YLeaf sixtyfourQ4t;
        static const ydk::Enum::YLeaf oneP1Q0t;
        static const ydk::Enum::YLeaf oneP1Q4t;
        static const ydk::Enum::YLeaf oneP1Q8t;
        static const ydk::Enum::YLeaf oneP2Q1t;
        static const ydk::Enum::YLeaf oneP2Q2t;
        static const ydk::Enum::YLeaf oneP3Q1t;
        static const ydk::Enum::YLeaf oneP7Q8t;
        static const ydk::Enum::YLeaf oneP3Q8t;
        static const ydk::Enum::YLeaf sixteenQ8t;
        static const ydk::Enum::YLeaf oneP15Q8t;
        static const ydk::Enum::YLeaf oneP15Q1t;
        static const ydk::Enum::YLeaf oneP7Q1t;
        static const ydk::Enum::YLeaf oneP31Q1t;
        static const ydk::Enum::YLeaf thirtytwoQ1t;
        static const ydk::Enum::YLeaf thirtytwoQ8t;
        static const ydk::Enum::YLeaf oneP31Q8t;
        static const ydk::Enum::YLeaf oneP7Q4t;
        static const ydk::Enum::YLeaf oneP3Q4t;
        static const ydk::Enum::YLeaf oneP7Q2t;

};

class CISCOQOSPIBMIB::Qosifdroppreferencetable::Qosifdroppreferenceentry::Qosifdropdiscipline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qosIfDropWRED;
        static const ydk::Enum::YLeaf qosIfDropTailDrop;

};

class CISCOQOSPIBMIB::Qosifschedulingpreferencestable::Qosifschedulingpreferenceentry::Qosifschedulingdiscipline : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf weightedFairQueueing;
        static const ydk::Enum::YLeaf weightedRoundRobin;
        static const ydk::Enum::YLeaf customQueueing;
        static const ydk::Enum::YLeaf priorityQueueing;
        static const ydk::Enum::YLeaf classBasedWFQ;
        static const ydk::Enum::YLeaf fifo;
        static const ydk::Enum::YLeaf pqWrr;
        static const ydk::Enum::YLeaf pqCbwfq;

};

class CISCOQOSPIBMIB::Qosipaclactiontable::Qosipaclactionentry::Qosipaclinterfacedirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class CISCOQOSPIBMIB::Qospolicertable::Qospolicerentry::Qospoliceraction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf mark;
        static const ydk::Enum::YLeaf shape;

};

class CISCOQOSPIBMIB::Qosunmatchedpolicytable::Qosunmatchedpolicyentry::Qosunmatchedpolicydirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_QOS_PIB_MIB_ */

