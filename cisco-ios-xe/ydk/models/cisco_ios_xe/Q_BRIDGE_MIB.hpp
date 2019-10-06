#ifndef _Q_BRIDGE_MIB_
#define _Q_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Q_BRIDGE_MIB {

class QBRIDGEMIB : public ydk::Entity
{
    public:
        QBRIDGEMIB();
        ~QBRIDGEMIB();

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

        class Dot1qBase; //type: QBRIDGEMIB::Dot1qBase
        class Dot1qVlan; //type: QBRIDGEMIB::Dot1qVlan
        class Dot1qFdbTable; //type: QBRIDGEMIB::Dot1qFdbTable
        class Dot1qTpFdbTable; //type: QBRIDGEMIB::Dot1qTpFdbTable
        class Dot1qTpGroupTable; //type: QBRIDGEMIB::Dot1qTpGroupTable
        class Dot1qForwardAllTable; //type: QBRIDGEMIB::Dot1qForwardAllTable
        class Dot1qForwardUnregisteredTable; //type: QBRIDGEMIB::Dot1qForwardUnregisteredTable
        class Dot1qStaticUnicastTable; //type: QBRIDGEMIB::Dot1qStaticUnicastTable
        class Dot1qStaticMulticastTable; //type: QBRIDGEMIB::Dot1qStaticMulticastTable
        class Dot1qVlanCurrentTable; //type: QBRIDGEMIB::Dot1qVlanCurrentTable
        class Dot1qVlanStaticTable; //type: QBRIDGEMIB::Dot1qVlanStaticTable
        class Dot1qPortVlanStatisticsTable; //type: QBRIDGEMIB::Dot1qPortVlanStatisticsTable
        class Dot1qPortVlanHCStatisticsTable; //type: QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable
        class Dot1qLearningConstraintsTable; //type: QBRIDGEMIB::Dot1qLearningConstraintsTable
        class Dot1vProtocolGroupTable; //type: QBRIDGEMIB::Dot1vProtocolGroupTable
        class Dot1vProtocolPortTable; //type: QBRIDGEMIB::Dot1vProtocolPortTable

        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qBase> dot1qbase;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlan> dot1qvlan;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qFdbTable> dot1qfdbtable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qTpFdbTable> dot1qtpfdbtable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qTpGroupTable> dot1qtpgrouptable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qForwardAllTable> dot1qforwardalltable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qForwardUnregisteredTable> dot1qforwardunregisteredtable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qStaticUnicastTable> dot1qstaticunicasttable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qStaticMulticastTable> dot1qstaticmulticasttable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable> dot1qvlancurrenttable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanStaticTable> dot1qvlanstatictable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qPortVlanStatisticsTable> dot1qportvlanstatisticstable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable> dot1qportvlanhcstatisticstable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qLearningConstraintsTable> dot1qlearningconstraintstable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1vProtocolGroupTable> dot1vprotocolgrouptable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1vProtocolPortTable> dot1vprotocolporttable;
        
}; // QBRIDGEMIB


class QBRIDGEMIB::Dot1qBase : public ydk::Entity
{
    public:
        Dot1qBase();
        ~Dot1qBase();

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

        ydk::YLeaf dot1qvlanversionnumber; //type: Dot1qVlanVersionNumber
        ydk::YLeaf dot1qmaxvlanid; //type: int32
        ydk::YLeaf dot1qmaxsupportedvlans; //type: uint32
        ydk::YLeaf dot1qnumvlans; //type: uint32
        ydk::YLeaf dot1qgvrpstatus; //type: EnabledStatus
        class Dot1qVlanVersionNumber;

}; // QBRIDGEMIB::Dot1qBase


class QBRIDGEMIB::Dot1qVlan : public ydk::Entity
{
    public:
        Dot1qVlan();
        ~Dot1qVlan();

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

        ydk::YLeaf dot1qvlannumdeletes; //type: uint32
        ydk::YLeaf dot1qnextfreelocalvlanindex; //type: int32
        ydk::YLeaf dot1qconstraintsetdefault; //type: int32
        ydk::YLeaf dot1qconstrainttypedefault; //type: Dot1qConstraintTypeDefault
        class Dot1qConstraintTypeDefault;

}; // QBRIDGEMIB::Dot1qVlan


class QBRIDGEMIB::Dot1qFdbTable : public ydk::Entity
{
    public:
        Dot1qFdbTable();
        ~Dot1qFdbTable();

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

        class Dot1qFdbEntry; //type: QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry

        ydk::YList dot1qfdbentry;
        
}; // QBRIDGEMIB::Dot1qFdbTable


class QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry : public ydk::Entity
{
    public:
        Dot1qFdbEntry();
        ~Dot1qFdbEntry();

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

        ydk::YLeaf dot1qfdbid; //type: uint32
        ydk::YLeaf dot1qfdbdynamiccount; //type: uint32

}; // QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry


class QBRIDGEMIB::Dot1qTpFdbTable : public ydk::Entity
{
    public:
        Dot1qTpFdbTable();
        ~Dot1qTpFdbTable();

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

        class Dot1qTpFdbEntry; //type: QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry

        ydk::YList dot1qtpfdbentry;
        
}; // QBRIDGEMIB::Dot1qTpFdbTable


class QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry : public ydk::Entity
{
    public:
        Dot1qTpFdbEntry();
        ~Dot1qTpFdbEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        ydk::YLeaf dot1qtpfdbaddress; //type: string
        ydk::YLeaf dot1qtpfdbport; //type: int32
        ydk::YLeaf dot1qtpfdbstatus; //type: Dot1qTpFdbStatus
        class Dot1qTpFdbStatus;

}; // QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry


class QBRIDGEMIB::Dot1qTpGroupTable : public ydk::Entity
{
    public:
        Dot1qTpGroupTable();
        ~Dot1qTpGroupTable();

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

        class Dot1qTpGroupEntry; //type: QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry

        ydk::YList dot1qtpgroupentry;
        
}; // QBRIDGEMIB::Dot1qTpGroupTable


class QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry : public ydk::Entity
{
    public:
        Dot1qTpGroupEntry();
        ~Dot1qTpGroupEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpgroupaddress; //type: string
        ydk::YLeaf dot1qtpgroupegressports; //type: binary
        ydk::YLeaf dot1qtpgrouplearnt; //type: binary

}; // QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry


class QBRIDGEMIB::Dot1qForwardAllTable : public ydk::Entity
{
    public:
        Dot1qForwardAllTable();
        ~Dot1qForwardAllTable();

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

        class Dot1qForwardAllEntry; //type: QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry

        ydk::YList dot1qforwardallentry;
        
}; // QBRIDGEMIB::Dot1qForwardAllTable


class QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry : public ydk::Entity
{
    public:
        Dot1qForwardAllEntry();
        ~Dot1qForwardAllEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qforwardallports; //type: binary
        ydk::YLeaf dot1qforwardallstaticports; //type: binary
        ydk::YLeaf dot1qforwardallforbiddenports; //type: binary

}; // QBRIDGEMIB::Dot1qForwardAllTable::Dot1qForwardAllEntry


class QBRIDGEMIB::Dot1qForwardUnregisteredTable : public ydk::Entity
{
    public:
        Dot1qForwardUnregisteredTable();
        ~Dot1qForwardUnregisteredTable();

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

        class Dot1qForwardUnregisteredEntry; //type: QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry

        ydk::YList dot1qforwardunregisteredentry;
        
}; // QBRIDGEMIB::Dot1qForwardUnregisteredTable


class QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry : public ydk::Entity
{
    public:
        Dot1qForwardUnregisteredEntry();
        ~Dot1qForwardUnregisteredEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qforwardunregisteredports; //type: binary
        ydk::YLeaf dot1qforwardunregisteredstaticports; //type: binary
        ydk::YLeaf dot1qforwardunregisteredforbiddenports; //type: binary

}; // QBRIDGEMIB::Dot1qForwardUnregisteredTable::Dot1qForwardUnregisteredEntry


class QBRIDGEMIB::Dot1qStaticUnicastTable : public ydk::Entity
{
    public:
        Dot1qStaticUnicastTable();
        ~Dot1qStaticUnicastTable();

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

        class Dot1qStaticUnicastEntry; //type: QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry

        ydk::YList dot1qstaticunicastentry;
        
}; // QBRIDGEMIB::Dot1qStaticUnicastTable


class QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry : public ydk::Entity
{
    public:
        Dot1qStaticUnicastEntry();
        ~Dot1qStaticUnicastEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        ydk::YLeaf dot1qstaticunicastaddress; //type: string
        ydk::YLeaf dot1qstaticunicastreceiveport; //type: int32
        ydk::YLeaf dot1qstaticunicastallowedtogoto; //type: binary
        ydk::YLeaf dot1qstaticunicaststatus; //type: Dot1qStaticUnicastStatus
        class Dot1qStaticUnicastStatus;

}; // QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry


class QBRIDGEMIB::Dot1qStaticMulticastTable : public ydk::Entity
{
    public:
        Dot1qStaticMulticastTable();
        ~Dot1qStaticMulticastTable();

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

        class Dot1qStaticMulticastEntry; //type: QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry

        ydk::YList dot1qstaticmulticastentry;
        
}; // QBRIDGEMIB::Dot1qStaticMulticastTable


class QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry : public ydk::Entity
{
    public:
        Dot1qStaticMulticastEntry();
        ~Dot1qStaticMulticastEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qstaticmulticastaddress; //type: string
        ydk::YLeaf dot1qstaticmulticastreceiveport; //type: int32
        ydk::YLeaf dot1qstaticmulticaststaticegressports; //type: binary
        ydk::YLeaf dot1qstaticmulticastforbiddenegressports; //type: binary
        ydk::YLeaf dot1qstaticmulticaststatus; //type: Dot1qStaticMulticastStatus
        class Dot1qStaticMulticastStatus;

}; // QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry


class QBRIDGEMIB::Dot1qVlanCurrentTable : public ydk::Entity
{
    public:
        Dot1qVlanCurrentTable();
        ~Dot1qVlanCurrentTable();

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

        class Dot1qVlanCurrentEntry; //type: QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry

        ydk::YList dot1qvlancurrententry;
        
}; // QBRIDGEMIB::Dot1qVlanCurrentTable


class QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry : public ydk::Entity
{
    public:
        Dot1qVlanCurrentEntry();
        ~Dot1qVlanCurrentEntry();

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

        ydk::YLeaf dot1qvlantimemark; //type: uint32
        ydk::YLeaf dot1qvlanindex; //type: uint32
        ydk::YLeaf dot1qvlanfdbid; //type: uint32
        ydk::YLeaf dot1qvlancurrentegressports; //type: binary
        ydk::YLeaf dot1qvlancurrentuntaggedports; //type: binary
        ydk::YLeaf dot1qvlanstatus; //type: Dot1qVlanStatus
        ydk::YLeaf dot1qvlancreationtime; //type: uint32
        class Dot1qVlanStatus;

}; // QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry


class QBRIDGEMIB::Dot1qVlanStaticTable : public ydk::Entity
{
    public:
        Dot1qVlanStaticTable();
        ~Dot1qVlanStaticTable();

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

        class Dot1qVlanStaticEntry; //type: QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry

        ydk::YList dot1qvlanstaticentry;
        
}; // QBRIDGEMIB::Dot1qVlanStaticTable


class QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry : public ydk::Entity
{
    public:
        Dot1qVlanStaticEntry();
        ~Dot1qVlanStaticEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qvlanstaticname; //type: string
        ydk::YLeaf dot1qvlanstaticegressports; //type: binary
        ydk::YLeaf dot1qvlanforbiddenegressports; //type: binary
        ydk::YLeaf dot1qvlanstaticuntaggedports; //type: binary
        ydk::YLeaf dot1qvlanstaticrowstatus; //type: RowStatus

}; // QBRIDGEMIB::Dot1qVlanStaticTable::Dot1qVlanStaticEntry


class QBRIDGEMIB::Dot1qPortVlanStatisticsTable : public ydk::Entity
{
    public:
        Dot1qPortVlanStatisticsTable();
        ~Dot1qPortVlanStatisticsTable();

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

        class Dot1qPortVlanStatisticsEntry; //type: QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry

        ydk::YList dot1qportvlanstatisticsentry;
        
}; // QBRIDGEMIB::Dot1qPortVlanStatisticsTable


class QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry : public ydk::Entity
{
    public:
        Dot1qPortVlanStatisticsEntry();
        ~Dot1qPortVlanStatisticsEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpvlanportinframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportoutframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportindiscards; //type: uint32
        ydk::YLeaf dot1qtpvlanportinoverflowframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportoutoverflowframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportinoverflowdiscards; //type: uint32

}; // QBRIDGEMIB::Dot1qPortVlanStatisticsTable::Dot1qPortVlanStatisticsEntry


class QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable : public ydk::Entity
{
    public:
        Dot1qPortVlanHCStatisticsTable();
        ~Dot1qPortVlanHCStatisticsTable();

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

        class Dot1qPortVlanHCStatisticsEntry; //type: QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry

        ydk::YList dot1qportvlanhcstatisticsentry;
        
}; // QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable


class QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry : public ydk::Entity
{
    public:
        Dot1qPortVlanHCStatisticsEntry();
        ~Dot1qPortVlanHCStatisticsEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpvlanporthcinframes; //type: uint64
        ydk::YLeaf dot1qtpvlanporthcoutframes; //type: uint64
        ydk::YLeaf dot1qtpvlanporthcindiscards; //type: uint64

}; // QBRIDGEMIB::Dot1qPortVlanHCStatisticsTable::Dot1qPortVlanHCStatisticsEntry


class QBRIDGEMIB::Dot1qLearningConstraintsTable : public ydk::Entity
{
    public:
        Dot1qLearningConstraintsTable();
        ~Dot1qLearningConstraintsTable();

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

        class Dot1qLearningConstraintsEntry; //type: QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry

        ydk::YList dot1qlearningconstraintsentry;
        
}; // QBRIDGEMIB::Dot1qLearningConstraintsTable


class QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry : public ydk::Entity
{
    public:
        Dot1qLearningConstraintsEntry();
        ~Dot1qLearningConstraintsEntry();

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

        ydk::YLeaf dot1qconstraintvlan; //type: uint32
        ydk::YLeaf dot1qconstraintset; //type: int32
        ydk::YLeaf dot1qconstrainttype; //type: Dot1qConstraintType
        ydk::YLeaf dot1qconstraintstatus; //type: RowStatus
        class Dot1qConstraintType;

}; // QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry


class QBRIDGEMIB::Dot1vProtocolGroupTable : public ydk::Entity
{
    public:
        Dot1vProtocolGroupTable();
        ~Dot1vProtocolGroupTable();

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

        class Dot1vProtocolGroupEntry; //type: QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry

        ydk::YList dot1vprotocolgroupentry;
        
}; // QBRIDGEMIB::Dot1vProtocolGroupTable


class QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry : public ydk::Entity
{
    public:
        Dot1vProtocolGroupEntry();
        ~Dot1vProtocolGroupEntry();

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

        ydk::YLeaf dot1vprotocoltemplateframetype; //type: Dot1vProtocolTemplateFrameType
        ydk::YLeaf dot1vprotocoltemplateprotocolvalue; //type: binary
        ydk::YLeaf dot1vprotocolgroupid; //type: int32
        ydk::YLeaf dot1vprotocolgrouprowstatus; //type: RowStatus
        class Dot1vProtocolTemplateFrameType;

}; // QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry


class QBRIDGEMIB::Dot1vProtocolPortTable : public ydk::Entity
{
    public:
        Dot1vProtocolPortTable();
        ~Dot1vProtocolPortTable();

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

        class Dot1vProtocolPortEntry; //type: QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry

        ydk::YList dot1vprotocolportentry;
        
}; // QBRIDGEMIB::Dot1vProtocolPortTable


class QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry : public ydk::Entity
{
    public:
        Dot1vProtocolPortEntry();
        ~Dot1vProtocolPortEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1vprotocolportgroupid; //type: int32
        ydk::YLeaf dot1vprotocolportgroupvid; //type: int32
        ydk::YLeaf dot1vprotocolportrowstatus; //type: RowStatus

}; // QBRIDGEMIB::Dot1vProtocolPortTable::Dot1vProtocolPortEntry

class QBRIDGEMIB::Dot1qBase::Dot1qVlanVersionNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;

        static int get_enum_value(const std::string & name) {
            if (name == "version1") return 1;
            return -1;
        }
};

class QBRIDGEMIB::Dot1qVlan::Dot1qConstraintTypeDefault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf shared;

        static int get_enum_value(const std::string & name) {
            if (name == "independent") return 1;
            if (name == "shared") return 2;
            return -1;
        }
};

class QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::Dot1qTpFdbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf learned;
        static const ydk::Enum::YLeaf self;
        static const ydk::Enum::YLeaf mgmt;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "learned") return 3;
            if (name == "self") return 4;
            if (name == "mgmt") return 5;
            return -1;
        }
};

class QBRIDGEMIB::Dot1qStaticUnicastTable::Dot1qStaticUnicastEntry::Dot1qStaticUnicastStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "permanent") return 3;
            if (name == "deleteOnReset") return 4;
            if (name == "deleteOnTimeout") return 5;
            return -1;
        }
};

class QBRIDGEMIB::Dot1qStaticMulticastTable::Dot1qStaticMulticastEntry::Dot1qStaticMulticastStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "permanent") return 3;
            if (name == "deleteOnReset") return 4;
            if (name == "deleteOnTimeout") return 5;
            return -1;
        }
};

class QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::Dot1qVlanStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf dynamicGvrp;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "permanent") return 2;
            if (name == "dynamicGvrp") return 3;
            return -1;
        }
};

class QBRIDGEMIB::Dot1qLearningConstraintsTable::Dot1qLearningConstraintsEntry::Dot1qConstraintType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf shared;

        static int get_enum_value(const std::string & name) {
            if (name == "independent") return 1;
            if (name == "shared") return 2;
            return -1;
        }
};

class QBRIDGEMIB::Dot1vProtocolGroupTable::Dot1vProtocolGroupEntry::Dot1vProtocolTemplateFrameType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf rfc1042;
        static const ydk::Enum::YLeaf snap8021H;
        static const ydk::Enum::YLeaf snapOther;
        static const ydk::Enum::YLeaf llcOther;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet") return 1;
            if (name == "rfc1042") return 2;
            if (name == "snap8021H") return 3;
            if (name == "snapOther") return 4;
            if (name == "llcOther") return 5;
            return -1;
        }
};


}
}

#endif /* _Q_BRIDGE_MIB_ */

