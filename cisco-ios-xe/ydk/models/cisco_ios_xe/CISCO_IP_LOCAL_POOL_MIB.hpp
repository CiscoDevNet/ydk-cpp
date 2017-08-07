#ifndef _CISCO_IP_LOCAL_POOL_MIB_
#define _CISCO_IP_LOCAL_POOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IP_LOCAL_POOL_MIB {

class CiscoIpLocalPoolMib : public ydk::Entity
{
    public:
        CiscoIpLocalPoolMib();
        ~CiscoIpLocalPoolMib();

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

        class Ciplocalpoolconfig; //type: CiscoIpLocalPoolMib::Ciplocalpoolconfig
        class Ciplocalpoolconfigtable; //type: CiscoIpLocalPoolMib::Ciplocalpoolconfigtable
        class Ciplocalpoolgroupcontainstable; //type: CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable
        class Ciplocalpoolgrouptable; //type: CiscoIpLocalPoolMib::Ciplocalpoolgrouptable
        class Ciplocalpoolstatstable; //type: CiscoIpLocalPoolMib::Ciplocalpoolstatstable
        class Ciplocalpoolalloctable; //type: CiscoIpLocalPoolMib::Ciplocalpoolalloctable

        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolalloctable> ciplocalpoolalloctable;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfig> ciplocalpoolconfig;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable> ciplocalpoolconfigtable;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable> ciplocalpoolgroupcontainstable;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgrouptable> ciplocalpoolgrouptable;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolstatstable> ciplocalpoolstatstable;
        
}; // CiscoIpLocalPoolMib


class CiscoIpLocalPoolMib::Ciplocalpoolconfig : public ydk::Entity
{
    public:
        Ciplocalpoolconfig();
        ~Ciplocalpoolconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciplocalpoolnotificationsenable; //type: boolean

}; // CiscoIpLocalPoolMib::Ciplocalpoolconfig


class CiscoIpLocalPoolMib::Ciplocalpoolconfigtable : public ydk::Entity
{
    public:
        Ciplocalpoolconfigtable();
        ~Ciplocalpoolconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciplocalpoolconfigentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry> > ciplocalpoolconfigentry;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolconfigtable


class CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry : public ydk::Entity
{
    public:
        Ciplocalpoolconfigentry();
        ~Ciplocalpoolconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciplocalpoolname; //type: binary
        ydk::YLeaf ciplocalpooladdrtype; //type: Inetaddresstype
        ydk::YLeaf ciplocalpooladdresslo; //type: binary
        ydk::YLeaf ciplocalpooladdresshi; //type: binary
        ydk::YLeaf ciplocalpoolfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolinuseaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolgroupcontainedin; //type: binary
        ydk::YLeaf ciplocalpoolrowstatus; //type: Rowstatus
        ydk::YLeaf ciplocalpoolpriority; //type: uint32

}; // CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry


class CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable : public ydk::Entity
{
    public:
        Ciplocalpoolgroupcontainstable();
        ~Ciplocalpoolgroupcontainstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciplocalpoolgroupcontainsentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry> > ciplocalpoolgroupcontainsentry;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable


class CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry : public ydk::Entity
{
    public:
        Ciplocalpoolgroupcontainsentry();
        ~Ciplocalpoolgroupcontainsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciplocalpoolgroupname; //type: binary
        ydk::YLeaf ciplocalpoolchildindex; //type: binary

}; // CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry


class CiscoIpLocalPoolMib::Ciplocalpoolgrouptable : public ydk::Entity
{
    public:
        Ciplocalpoolgrouptable();
        ~Ciplocalpoolgrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciplocalpoolgroupentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry> > ciplocalpoolgroupentry;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolgrouptable


class CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry : public ydk::Entity
{
    public:
        Ciplocalpoolgroupentry();
        ~Ciplocalpoolgroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::ciplocalpoolgroupname)
        ydk::YLeaf ciplocalpoolgroupname;
        ydk::YLeaf ciplocalpoolgroupfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolgroupinuseaddrs; //type: uint32

}; // CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry


class CiscoIpLocalPoolMib::Ciplocalpoolstatstable : public ydk::Entity
{
    public:
        Ciplocalpoolstatstable();
        ~Ciplocalpoolstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciplocalpoolstatsentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry> > ciplocalpoolstatsentry;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolstatstable


class CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry : public ydk::Entity
{
    public:
        Ciplocalpoolstatsentry();
        ~Ciplocalpoolstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::ciplocalpoolname)
        ydk::YLeaf ciplocalpoolname;
        ydk::YLeaf ciplocalpoolstatfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstathiwaterusedaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrthldlo; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrthldhi; //type: uint32
        ydk::YLeaf ciplocalpoolpercentaddrthldlo; //type: uint32
        ydk::YLeaf ciplocalpoolpercentaddrthldhi; //type: uint32

}; // CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry


class CiscoIpLocalPoolMib::Ciplocalpoolalloctable : public ydk::Entity
{
    public:
        Ciplocalpoolalloctable();
        ~Ciplocalpoolalloctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciplocalpoolallocentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry> > ciplocalpoolallocentry;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolalloctable


class CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry : public ydk::Entity
{
    public:
        Ciplocalpoolallocentry();
        ~Ciplocalpoolallocentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::ciplocalpoolname)
        ydk::YLeaf ciplocalpoolname;
        ydk::YLeaf ciplocalpoolallocaddrtype; //type: Inetaddresstype
        ydk::YLeaf ciplocalpoolallocaddr; //type: binary
        ydk::YLeaf ciplocalpoolallocifindex; //type: int32
        ydk::YLeaf ciplocalpoolallocuser; //type: string

}; // CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry


}
}

#endif /* _CISCO_IP_LOCAL_POOL_MIB_ */

