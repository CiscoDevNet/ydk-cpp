#ifndef _CISCO_IETF_PW_ENET_MIB_
#define _CISCO_IETF_PW_ENET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ENET_MIB {

class CISCOIETFPWENETMIB : public ydk::Entity
{
    public:
        CISCOIETFPWENETMIB();
        ~CISCOIETFPWENETMIB();

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

        class CpwVcEnetTable; //type: CISCOIETFPWENETMIB::CpwVcEnetTable
        class CpwVcEnetMplsPriMappingTable; //type: CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable
        class CpwVcEnetStatsTable; //type: CISCOIETFPWENETMIB::CpwVcEnetStatsTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::CpwVcEnetTable> cpwvcenettable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable> cpwvcenetmplsprimappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::CpwVcEnetStatsTable> cpwvcenetstatstable;
        
}; // CISCOIETFPWENETMIB


class CISCOIETFPWENETMIB::CpwVcEnetTable : public ydk::Entity
{
    public:
        CpwVcEnetTable();
        ~CpwVcEnetTable();

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

        class CpwVcEnetEntry; //type: CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry

        ydk::YList cpwvcenetentry;
        
}; // CISCOIETFPWENETMIB::CpwVcEnetTable


class CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry : public ydk::Entity
{
    public:
        CpwVcEnetEntry();
        ~CpwVcEnetEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetpwvlan; //type: int32
        ydk::YLeaf cpwvcenetvlanmode; //type: CpwVcEnetVlanMode
        ydk::YLeaf cpwvcenetportvlan; //type: int32
        ydk::YLeaf cpwvcenetvcifindex; //type: int32
        ydk::YLeaf cpwvcenetportifindex; //type: int32
        ydk::YLeaf cpwvcenetrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcenetstoragetype; //type: StorageType
        class CpwVcEnetVlanMode;

}; // CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry


class CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable : public ydk::Entity
{
    public:
        CpwVcEnetMplsPriMappingTable();
        ~CpwVcEnetMplsPriMappingTable();

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

        class CpwVcEnetMplsPriMappingTableEntry; //type: CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry

        ydk::YList cpwvcenetmplsprimappingtableentry;
        
}; // CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable


class CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry : public ydk::Entity
{
    public:
        CpwVcEnetMplsPriMappingTableEntry();
        ~CpwVcEnetMplsPriMappingTableEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetmplsprimapping; //type: CpwVcEnetMplsPriMapping
        ydk::YLeaf cpwvcenetmplsprimappingrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcenetmplsprimappingstoragetype; //type: StorageType

}; // CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry


class CISCOIETFPWENETMIB::CpwVcEnetStatsTable : public ydk::Entity
{
    public:
        CpwVcEnetStatsTable();
        ~CpwVcEnetStatsTable();

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

        class CpwVcEnetStatsEntry; //type: CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry

        ydk::YList cpwvcenetstatsentry;
        
}; // CISCOIETFPWENETMIB::CpwVcEnetStatsTable


class CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry : public ydk::Entity
{
    public:
        CpwVcEnetStatsEntry();
        ~CpwVcEnetStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetstatsillegalvlan; //type: uint64
        ydk::YLeaf cpwvcenetstatsillegallength; //type: uint64

}; // CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry

class CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf portBased;
        static const ydk::Enum::YLeaf noChange;
        static const ydk::Enum::YLeaf changeVlan;
        static const ydk::Enum::YLeaf addVlan;
        static const ydk::Enum::YLeaf removeVlan;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "portBased") return 1;
            if (name == "noChange") return 2;
            if (name == "changeVlan") return 3;
            if (name == "addVlan") return 4;
            if (name == "removeVlan") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_IETF_PW_ENET_MIB_ */

