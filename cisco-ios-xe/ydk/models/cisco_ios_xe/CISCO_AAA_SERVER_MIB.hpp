#ifndef _CISCO_AAA_SERVER_MIB_
#define _CISCO_AAA_SERVER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_AAA_SERVER_MIB {

class CiscoAaaServerMib : public ydk::Entity
{
    public:
        CiscoAaaServerMib();
        ~CiscoAaaServerMib();

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

        class Casconfig; //type: CiscoAaaServerMib::Casconfig
        class Casconfigtable; //type: CiscoAaaServerMib::Casconfigtable

        std::shared_ptr<CISCO_AAA_SERVER_MIB::CiscoAaaServerMib::Casconfig> casconfig;
        std::shared_ptr<CISCO_AAA_SERVER_MIB::CiscoAaaServerMib::Casconfigtable> casconfigtable;
        
}; // CiscoAaaServerMib


class CiscoAaaServerMib::Casconfig : public ydk::Entity
{
    public:
        Casconfig();
        ~Casconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf casserverstatechangeenable; //type: boolean

}; // CiscoAaaServerMib::Casconfig


class CiscoAaaServerMib::Casconfigtable : public ydk::Entity
{
    public:
        Casconfigtable();
        ~Casconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Casconfigentry; //type: CiscoAaaServerMib::Casconfigtable::Casconfigentry

        std::vector<std::shared_ptr<CISCO_AAA_SERVER_MIB::CiscoAaaServerMib::Casconfigtable::Casconfigentry> > casconfigentry;
        
}; // CiscoAaaServerMib::Casconfigtable


class CiscoAaaServerMib::Casconfigtable::Casconfigentry : public ydk::Entity
{
    public:
        Casconfigentry();
        ~Casconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf casprotocol; //type: Ciscoaaaprotocol
        ydk::YLeaf casindex; //type: uint32
        ydk::YLeaf casaddress; //type: string
        ydk::YLeaf casauthenport; //type: int32
        ydk::YLeaf casacctport; //type: int32
        ydk::YLeaf caskey; //type: string
        ydk::YLeaf caspriority; //type: uint32
        ydk::YLeaf casconfigrowstatus; //type: Rowstatus
        ydk::YLeaf casauthenrequests; //type: uint32
        ydk::YLeaf casauthenrequesttimeouts; //type: uint32
        ydk::YLeaf casauthenunexpectedresponses; //type: uint32
        ydk::YLeaf casauthenservererrorresponses; //type: uint32
        ydk::YLeaf casauthenincorrectresponses; //type: uint32
        ydk::YLeaf casauthenresponsetime; //type: int32
        ydk::YLeaf casauthentransactionsuccesses; //type: uint32
        ydk::YLeaf casauthentransactionfailures; //type: uint32
        ydk::YLeaf casauthorrequests; //type: uint32
        ydk::YLeaf casauthorrequesttimeouts; //type: uint32
        ydk::YLeaf casauthorunexpectedresponses; //type: uint32
        ydk::YLeaf casauthorservererrorresponses; //type: uint32
        ydk::YLeaf casauthorincorrectresponses; //type: uint32
        ydk::YLeaf casauthorresponsetime; //type: int32
        ydk::YLeaf casauthortransactionsuccesses; //type: uint32
        ydk::YLeaf casauthortransactionfailures; //type: uint32
        ydk::YLeaf casacctrequests; //type: uint32
        ydk::YLeaf casacctrequesttimeouts; //type: uint32
        ydk::YLeaf casacctunexpectedresponses; //type: uint32
        ydk::YLeaf casacctservererrorresponses; //type: uint32
        ydk::YLeaf casacctincorrectresponses; //type: uint32
        ydk::YLeaf casacctresponsetime; //type: int32
        ydk::YLeaf casaccttransactionsuccesses; //type: uint32
        ydk::YLeaf casaccttransactionfailures; //type: uint32
        ydk::YLeaf casstate; //type: Casstate
        ydk::YLeaf cascurrentstateduration; //type: int32
        ydk::YLeaf caspreviousstateduration; //type: int32
        ydk::YLeaf castotaldeadtime; //type: int32
        ydk::YLeaf casdeadcount; //type: uint32
        class Casstate;

}; // CiscoAaaServerMib::Casconfigtable::Casconfigentry

class Ciscoaaaprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacsplus;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf kerberos;
        static const ydk::Enum::YLeaf ntlm;
        static const ydk::Enum::YLeaf sdi;
        static const ydk::Enum::YLeaf other;

};

class CiscoAaaServerMib::Casconfigtable::Casconfigentry::Casstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf dead;

};


}
}

#endif /* _CISCO_AAA_SERVER_MIB_ */
