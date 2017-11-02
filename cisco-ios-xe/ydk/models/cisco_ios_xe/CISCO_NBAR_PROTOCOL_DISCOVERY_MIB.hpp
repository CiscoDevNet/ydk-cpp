#ifndef _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_
#define _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_NBAR_PROTOCOL_DISCOVERY_MIB {

class CISCONBARPROTOCOLDISCOVERYMIB : public ydk::Entity
{
    public:
        CISCONBARPROTOCOLDISCOVERYMIB();
        ~CISCONBARPROTOCOLDISCOVERYMIB();

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

        class Cnpdnotificationsconfig; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig
        class Cnpdstatustable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable
        class Cnpdallstatstable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable
        class Cnpdtopnconfigtable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable
        class Cnpdtopnstatstable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable
        class Cnpdthresholdconfigtable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable
        class Cnpdthresholdhistorytable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable
        class Cnpdsupportedprotocolstable; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable

        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig> cnpdnotificationsconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable> cnpdstatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable> cnpdallstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable> cnpdtopnconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable> cnpdtopnstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable> cnpdthresholdconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable> cnpdthresholdhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable> cnpdsupportedprotocolstable;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig : public ydk::Entity
{
    public:
        Cnpdnotificationsconfig();
        ~Cnpdnotificationsconfig();

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

        ydk::YLeaf cnpdnotificationsenable; //type: boolean

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable : public ydk::Entity
{
    public:
        Cnpdstatustable();
        ~Cnpdstatustable();

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

        class Cnpdstatusentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry> > cnpdstatusentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry : public ydk::Entity
{
    public:
        Cnpdstatusentry();
        ~Cnpdstatusentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cnpdstatuspdenable; //type: boolean
        ydk::YLeaf cnpdstatuslastupdatetime; //type: uint32

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable : public ydk::Entity
{
    public:
        Cnpdallstatstable();
        ~Cnpdallstatstable();

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

        class Cnpdallstatsentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry> > cnpdallstatsentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry : public ydk::Entity
{
    public:
        Cnpdallstatsentry();
        ~Cnpdallstatsentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cnpdallstatsprotocolsindex; //type: uint32
        ydk::YLeaf cnpdallstatsprotocolname; //type: binary
        ydk::YLeaf cnpdallstatsinpkts; //type: uint32
        ydk::YLeaf cnpdallstatsoutpkts; //type: uint32
        ydk::YLeaf cnpdallstatsinbytes; //type: uint32
        ydk::YLeaf cnpdallstatsoutbytes; //type: uint32
        ydk::YLeaf cnpdallstatshcinpkts; //type: uint64
        ydk::YLeaf cnpdallstatshcoutpkts; //type: uint64
        ydk::YLeaf cnpdallstatshcinbytes; //type: uint64
        ydk::YLeaf cnpdallstatshcoutbytes; //type: uint64
        ydk::YLeaf cnpdallstatsinbitrate; //type: uint32
        ydk::YLeaf cnpdallstatsoutbitrate; //type: uint32

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable : public ydk::Entity
{
    public:
        Cnpdtopnconfigtable();
        ~Cnpdtopnconfigtable();

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

        class Cnpdtopnconfigentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry> > cnpdtopnconfigentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry : public ydk::Entity
{
    public:
        Cnpdtopnconfigentry();
        ~Cnpdtopnconfigentry();

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

        ydk::YLeaf cnpdtopnconfigindex; //type: uint32
        ydk::YLeaf cnpdtopnconfigifindex; //type: int32
        ydk::YLeaf cnpdtopnconfigstatsselect; //type: CiscoPdDataType
        ydk::YLeaf cnpdtopnconfigsampletime; //type: uint32
        ydk::YLeaf cnpdtopnconfigrequestedsize; //type: uint32
        ydk::YLeaf cnpdtopnconfiggrantedsize; //type: uint32
        ydk::YLeaf cnpdtopnconfigtime; //type: uint32
        ydk::YLeaf cnpdtopnconfigstatus; //type: RowStatus

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable : public ydk::Entity
{
    public:
        Cnpdtopnstatstable();
        ~Cnpdtopnstatstable();

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

        class Cnpdtopnstatsentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry> > cnpdtopnstatsentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry : public ydk::Entity
{
    public:
        Cnpdtopnstatsentry();
        ~Cnpdtopnstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::cnpdtopnconfigindex)
        ydk::YLeaf cnpdtopnconfigindex;
        ydk::YLeaf cnpdtopnstatsindex; //type: uint32
        ydk::YLeaf cnpdtopnstatsprotocolname; //type: binary
        ydk::YLeaf cnpdtopnstatsrate; //type: uint32
        ydk::YLeaf cnpdtopnstatshcrate; //type: uint64

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable : public ydk::Entity
{
    public:
        Cnpdthresholdconfigtable();
        ~Cnpdthresholdconfigtable();

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

        class Cnpdthresholdconfigentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry> > cnpdthresholdconfigentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry : public ydk::Entity
{
    public:
        Cnpdthresholdconfigentry();
        ~Cnpdthresholdconfigentry();

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

        ydk::YLeaf cnpdthresholdconfigindex; //type: uint32
        ydk::YLeaf cnpdthresholdconfigifindex; //type: int32
        ydk::YLeaf cnpdthresholdconfiginterval; //type: uint32
        ydk::YLeaf cnpdthresholdconfigsampletype; //type: Cnpdthresholdconfigsampletype
        ydk::YLeaf cnpdthresholdconfigprotocol; //type: uint32
        ydk::YLeaf cnpdthresholdconfigprotocolany; //type: boolean
        ydk::YLeaf cnpdthresholdconfigstatsselect; //type: CiscoPdDataType
        ydk::YLeaf cnpdthresholdconfigstartup; //type: Cnpdthresholdconfigstartup
        ydk::YLeaf cnpdthresholdconfigrising; //type: uint32
        ydk::YLeaf cnpdthresholdconfigfalling; //type: uint32
        ydk::YLeaf cnpdthresholdconfigstatus; //type: RowStatus
        class Cnpdthresholdconfigsampletype;
        class Cnpdthresholdconfigstartup;

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable : public ydk::Entity
{
    public:
        Cnpdthresholdhistorytable();
        ~Cnpdthresholdhistorytable();

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

        class Cnpdthresholdhistoryentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry> > cnpdthresholdhistoryentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry : public ydk::Entity
{
    public:
        Cnpdthresholdhistoryentry();
        ~Cnpdthresholdhistoryentry();

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

        ydk::YLeaf cnpdthresholdhistoryindex; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryconfigindex; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryvalue; //type: uint32
        ydk::YLeaf cnpdthresholdhistorytype; //type: Cnpdthresholdhistorytype
        ydk::YLeaf cnpdthresholdhistorytime; //type: uint32
        ydk::YLeaf cnpdthresholdhistoryprotocol; //type: uint32
        ydk::YLeaf cnpdthresholdhistorystatsselect; //type: CiscoPdDataType
        class Cnpdthresholdhistorytype;

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable : public ydk::Entity
{
    public:
        Cnpdsupportedprotocolstable();
        ~Cnpdsupportedprotocolstable();

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

        class Cnpdsupportedprotocolsentry; //type: CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NBAR_PROTOCOL_DISCOVERY_MIB::CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry> > cnpdsupportedprotocolsentry;
        
}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable


class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry : public ydk::Entity
{
    public:
        Cnpdsupportedprotocolsentry();
        ~Cnpdsupportedprotocolsentry();

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

        ydk::YLeaf cnpdsupportedprotocolsindex; //type: uint32
        ydk::YLeaf cnpdsupportedprotocolsname; //type: binary

}; // CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry

class CiscoPdDataType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bitRateIn;
        static const ydk::Enum::YLeaf bitRateOut;
        static const ydk::Enum::YLeaf bitRateSum;
        static const ydk::Enum::YLeaf byteCountIn;
        static const ydk::Enum::YLeaf byteCountOut;
        static const ydk::Enum::YLeaf byteCountSum;
        static const ydk::Enum::YLeaf packetCountIn;
        static const ydk::Enum::YLeaf packetCountOut;
        static const ydk::Enum::YLeaf packetCountSum;

};

class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigstartup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingOrFalling;

};

class CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::Cnpdthresholdhistorytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf risingBreach;
        static const ydk::Enum::YLeaf fallingBreach;

};


}
}

#endif /* _CISCO_NBAR_PROTOCOL_DISCOVERY_MIB_ */

