#ifndef _CISCO_IP_LOCAL_POOL_MIB_
#define _CISCO_IP_LOCAL_POOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IP_LOCAL_POOL_MIB {

class CISCOIPLOCALPOOLMIB : public ydk::Entity
{
    public:
        CISCOIPLOCALPOOLMIB();
        ~CISCOIPLOCALPOOLMIB();

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

        class CIpLocalPoolConfig; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig
        class CIpLocalPoolConfigTable; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable
        class CIpLocalPoolGroupContainsTable; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable
        class CIpLocalPoolGroupTable; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable
        class CIpLocalPoolStatsTable; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable
        class CIpLocalPoolAllocTable; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable

        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig> ciplocalpoolconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable> ciplocalpoolconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable> ciplocalpoolgroupcontainstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable> ciplocalpoolgrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable> ciplocalpoolstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable> ciplocalpoolalloctable;
        
}; // CISCOIPLOCALPOOLMIB


class CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig : public ydk::Entity
{
    public:
        CIpLocalPoolConfig();
        ~CIpLocalPoolConfig();

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

        ydk::YLeaf ciplocalpoolnotificationsenable; //type: boolean

}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig


class CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable : public ydk::Entity
{
    public:
        CIpLocalPoolConfigTable();
        ~CIpLocalPoolConfigTable();

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

        class CIpLocalPoolConfigEntry; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry

        ydk::YList ciplocalpoolconfigentry;
        
}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable


class CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry : public ydk::Entity
{
    public:
        CIpLocalPoolConfigEntry();
        ~CIpLocalPoolConfigEntry();

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

        ydk::YLeaf ciplocalpoolname; //type: binary
        ydk::YLeaf ciplocalpooladdrtype; //type: InetAddressType
        ydk::YLeaf ciplocalpooladdresslo; //type: binary
        ydk::YLeaf ciplocalpooladdresshi; //type: binary
        ydk::YLeaf ciplocalpoolfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolinuseaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolgroupcontainedin; //type: binary
        ydk::YLeaf ciplocalpoolrowstatus; //type: RowStatus
        ydk::YLeaf ciplocalpoolpriority; //type: uint32

}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry


class CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable : public ydk::Entity
{
    public:
        CIpLocalPoolGroupContainsTable();
        ~CIpLocalPoolGroupContainsTable();

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

        class CIpLocalPoolGroupContainsEntry; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry

        ydk::YList ciplocalpoolgroupcontainsentry;
        
}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable


class CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry : public ydk::Entity
{
    public:
        CIpLocalPoolGroupContainsEntry();
        ~CIpLocalPoolGroupContainsEntry();

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

        ydk::YLeaf ciplocalpoolgroupname; //type: binary
        ydk::YLeaf ciplocalpoolchildindex; //type: binary

}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry


class CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable : public ydk::Entity
{
    public:
        CIpLocalPoolGroupTable();
        ~CIpLocalPoolGroupTable();

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

        class CIpLocalPoolGroupEntry; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry

        ydk::YList ciplocalpoolgroupentry;
        
}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable


class CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry : public ydk::Entity
{
    public:
        CIpLocalPoolGroupEntry();
        ~CIpLocalPoolGroupEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::ciplocalpoolgroupname)
        ydk::YLeaf ciplocalpoolgroupname;
        ydk::YLeaf ciplocalpoolgroupfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolgroupinuseaddrs; //type: uint32

}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry


class CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable : public ydk::Entity
{
    public:
        CIpLocalPoolStatsTable();
        ~CIpLocalPoolStatsTable();

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

        class CIpLocalPoolStatsEntry; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry

        ydk::YList ciplocalpoolstatsentry;
        
}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable


class CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry : public ydk::Entity
{
    public:
        CIpLocalPoolStatsEntry();
        ~CIpLocalPoolStatsEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::ciplocalpoolname)
        ydk::YLeaf ciplocalpoolname;
        ydk::YLeaf ciplocalpoolstatfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstathiwaterusedaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrthldlo; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrthldhi; //type: uint32
        ydk::YLeaf ciplocalpoolpercentaddrthldlo; //type: uint32
        ydk::YLeaf ciplocalpoolpercentaddrthldhi; //type: uint32

}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry


class CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable : public ydk::Entity
{
    public:
        CIpLocalPoolAllocTable();
        ~CIpLocalPoolAllocTable();

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

        class CIpLocalPoolAllocEntry; //type: CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry

        ydk::YList ciplocalpoolallocentry;
        
}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable


class CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry : public ydk::Entity
{
    public:
        CIpLocalPoolAllocEntry();
        ~CIpLocalPoolAllocEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::ciplocalpoolname)
        ydk::YLeaf ciplocalpoolname;
        ydk::YLeaf ciplocalpoolallocaddrtype; //type: InetAddressType
        ydk::YLeaf ciplocalpoolallocaddr; //type: binary
        ydk::YLeaf ciplocalpoolallocifindex; //type: int32
        ydk::YLeaf ciplocalpoolallocuser; //type: string

}; // CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry


}
}

#endif /* _CISCO_IP_LOCAL_POOL_MIB_ */

