#ifndef _CISCO_SYSLOG_MIB_
#define _CISCO_SYSLOG_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_SYSLOG_MIB {

class CiscoSyslogMib : public ydk::Entity
{
    public:
        CiscoSyslogMib();
        ~CiscoSyslogMib();

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

        class Clogbasic; //type: CiscoSyslogMib::Clogbasic
        class Cloghistory; //type: CiscoSyslogMib::Cloghistory
        class Clogserver; //type: CiscoSyslogMib::Clogserver
        class Cloghistorytable; //type: CiscoSyslogMib::Cloghistorytable
        class Clogserverconfigtable; //type: CiscoSyslogMib::Clogserverconfigtable

        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogbasic> clogbasic;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Cloghistory> cloghistory;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Cloghistorytable> cloghistorytable;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogserver> clogserver;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogserverconfigtable> clogserverconfigtable;
        
}; // CiscoSyslogMib


class CiscoSyslogMib::Clogbasic : public ydk::Entity
{
    public:
        Clogbasic();
        ~Clogbasic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clognotificationssent; //type: uint32
        ydk::YLeaf clognotificationsenabled; //type: boolean
        ydk::YLeaf clogmaxseverity; //type: Syslogseverity
        ydk::YLeaf clogmsgignores; //type: uint32
        ydk::YLeaf clogmsgdrops; //type: uint32
        ydk::YLeaf clogoriginidtype; //type: Clogoriginidtype
        ydk::YLeaf clogoriginid; //type: string
        class Clogoriginidtype;

}; // CiscoSyslogMib::Clogbasic


class CiscoSyslogMib::Cloghistory : public ydk::Entity
{
    public:
        Cloghistory();
        ~Cloghistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cloghisttablemaxlength; //type: int32
        ydk::YLeaf cloghistmsgsflushed; //type: uint32

}; // CiscoSyslogMib::Cloghistory


class CiscoSyslogMib::Clogserver : public ydk::Entity
{
    public:
        Clogserver();
        ~Clogserver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clogmaxservers; //type: uint32

}; // CiscoSyslogMib::Clogserver


class CiscoSyslogMib::Cloghistorytable : public ydk::Entity
{
    public:
        Cloghistorytable();
        ~Cloghistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cloghistoryentry; //type: CiscoSyslogMib::Cloghistorytable::Cloghistoryentry

        std::vector<std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Cloghistorytable::Cloghistoryentry> > cloghistoryentry;
        
}; // CiscoSyslogMib::Cloghistorytable


class CiscoSyslogMib::Cloghistorytable::Cloghistoryentry : public ydk::Entity
{
    public:
        Cloghistoryentry();
        ~Cloghistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cloghistindex; //type: int32
        ydk::YLeaf cloghistfacility; //type: string
        ydk::YLeaf cloghistseverity; //type: Syslogseverity
        ydk::YLeaf cloghistmsgname; //type: string
        ydk::YLeaf cloghistmsgtext; //type: string
        ydk::YLeaf cloghisttimestamp; //type: uint32

}; // CiscoSyslogMib::Cloghistorytable::Cloghistoryentry


class CiscoSyslogMib::Clogserverconfigtable : public ydk::Entity
{
    public:
        Clogserverconfigtable();
        ~Clogserverconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clogserverconfigentry; //type: CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry

        std::vector<std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry> > clogserverconfigentry;
        
}; // CiscoSyslogMib::Clogserverconfigtable


class CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry : public ydk::Entity
{
    public:
        Clogserverconfigentry();
        ~Clogserverconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clogserveraddrtype; //type: Inetaddresstype
        ydk::YLeaf clogserveraddr; //type: binary
        ydk::YLeaf clogserverstatus; //type: Rowstatus

}; // CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry

class Syslogseverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};

class CiscoSyslogMib::Clogbasic::Clogoriginidtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hostName;
        static const ydk::Enum::YLeaf ipv4Address;
        static const ydk::Enum::YLeaf contextName;
        static const ydk::Enum::YLeaf userDefined;

};


}
}

#endif /* _CISCO_SYSLOG_MIB_ */

