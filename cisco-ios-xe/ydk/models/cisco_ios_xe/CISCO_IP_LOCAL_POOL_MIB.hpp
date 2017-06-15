#ifndef _CISCO_IP_LOCAL_POOL_MIB_
#define _CISCO_IP_LOCAL_POOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IP_LOCAL_POOL_MIB {

class CiscoIpLocalPoolMib : public Entity
{
    public:
        CiscoIpLocalPoolMib();
        ~CiscoIpLocalPoolMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Ciplocalpoolconfig; //type: CiscoIpLocalPoolMib::Ciplocalpoolconfig
        class Ciplocalpoolconfigtable; //type: CiscoIpLocalPoolMib::Ciplocalpoolconfigtable
        class Ciplocalpoolgroupcontainstable; //type: CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable
        class Ciplocalpoolgrouptable; //type: CiscoIpLocalPoolMib::Ciplocalpoolgrouptable
        class Ciplocalpoolstatstable; //type: CiscoIpLocalPoolMib::Ciplocalpoolstatstable
        class Ciplocalpoolalloctable; //type: CiscoIpLocalPoolMib::Ciplocalpoolalloctable

        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolalloctable> ciplocalpoolalloctable_;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfig> ciplocalpoolconfig_;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable> ciplocalpoolconfigtable_;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable> ciplocalpoolgroupcontainstable_;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgrouptable> ciplocalpoolgrouptable_;
        std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolstatstable> ciplocalpoolstatstable_;
        
}; // CiscoIpLocalPoolMib


class CiscoIpLocalPoolMib::Ciplocalpoolconfig : public Entity
{
    public:
        Ciplocalpoolconfig();
        ~Ciplocalpoolconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciplocalpoolnotificationsenable; //type: boolean

}; // CiscoIpLocalPoolMib::Ciplocalpoolconfig


class CiscoIpLocalPoolMib::Ciplocalpoolconfigtable : public Entity
{
    public:
        Ciplocalpoolconfigtable();
        ~Ciplocalpoolconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciplocalpoolconfigentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry> > ciplocalpoolconfigentry_;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolconfigtable


class CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry : public Entity
{
    public:
        Ciplocalpoolconfigentry();
        ~Ciplocalpoolconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciplocalpoolname; //type: binary
        YLeaf ciplocalpooladdrtype; //type: InetaddresstypeEnum
        YLeaf ciplocalpooladdresslo; //type: binary
        YLeaf ciplocalpooladdresshi; //type: binary
        YLeaf ciplocalpoolfreeaddrs; //type: uint32
        YLeaf ciplocalpoolinuseaddrs; //type: uint32
        YLeaf ciplocalpoolgroupcontainedin; //type: binary
        YLeaf ciplocalpoolrowstatus; //type: RowstatusEnum
        YLeaf ciplocalpoolpriority; //type: uint32

}; // CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry


class CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable : public Entity
{
    public:
        Ciplocalpoolgroupcontainstable();
        ~Ciplocalpoolgroupcontainstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciplocalpoolgroupcontainsentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry> > ciplocalpoolgroupcontainsentry_;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable


class CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry : public Entity
{
    public:
        Ciplocalpoolgroupcontainsentry();
        ~Ciplocalpoolgroupcontainsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciplocalpoolgroupname; //type: binary
        YLeaf ciplocalpoolchildindex; //type: binary

}; // CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry


class CiscoIpLocalPoolMib::Ciplocalpoolgrouptable : public Entity
{
    public:
        Ciplocalpoolgrouptable();
        ~Ciplocalpoolgrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciplocalpoolgroupentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry> > ciplocalpoolgroupentry_;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolgrouptable


class CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry : public Entity
{
    public:
        Ciplocalpoolgroupentry();
        ~Ciplocalpoolgroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::ciplocalpoolgroupname)
        YLeaf ciplocalpoolgroupname;
        YLeaf ciplocalpoolgroupfreeaddrs; //type: uint32
        YLeaf ciplocalpoolgroupinuseaddrs; //type: uint32

}; // CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry


class CiscoIpLocalPoolMib::Ciplocalpoolstatstable : public Entity
{
    public:
        Ciplocalpoolstatstable();
        ~Ciplocalpoolstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciplocalpoolstatsentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry> > ciplocalpoolstatsentry_;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolstatstable


class CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry : public Entity
{
    public:
        Ciplocalpoolstatsentry();
        ~Ciplocalpoolstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::ciplocalpoolname)
        YLeaf ciplocalpoolname;
        YLeaf ciplocalpoolstatfreeaddrs; //type: uint32
        YLeaf ciplocalpoolstatinuseaddrs; //type: uint32
        YLeaf ciplocalpoolstathiwaterusedaddrs; //type: uint32
        YLeaf ciplocalpoolstatinuseaddrthldlo; //type: uint32
        YLeaf ciplocalpoolstatinuseaddrthldhi; //type: uint32
        YLeaf ciplocalpoolpercentaddrthldlo; //type: uint32
        YLeaf ciplocalpoolpercentaddrthldhi; //type: uint32

}; // CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry


class CiscoIpLocalPoolMib::Ciplocalpoolalloctable : public Entity
{
    public:
        Ciplocalpoolalloctable();
        ~Ciplocalpoolalloctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciplocalpoolallocentry; //type: CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry

        std::vector<std::shared_ptr<CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry> > ciplocalpoolallocentry_;
        
}; // CiscoIpLocalPoolMib::Ciplocalpoolalloctable


class CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry : public Entity
{
    public:
        Ciplocalpoolallocentry();
        ~Ciplocalpoolallocentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to CISCO_IP_LOCAL_POOL_MIB::CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::ciplocalpoolname)
        YLeaf ciplocalpoolname;
        YLeaf ciplocalpoolallocaddrtype; //type: InetaddresstypeEnum
        YLeaf ciplocalpoolallocaddr; //type: binary
        YLeaf ciplocalpoolallocifindex; //type: int32
        YLeaf ciplocalpoolallocuser; //type: string

}; // CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry


}
}

#endif /* _CISCO_IP_LOCAL_POOL_MIB_ */

