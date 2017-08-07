#ifndef _CISCO_CONFIG_COPY_MIB_
#define _CISCO_CONFIG_COPY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CONFIG_COPY_MIB {

class CiscoConfigCopyMib : public ydk::Entity
{
    public:
        CiscoConfigCopyMib();
        ~CiscoConfigCopyMib();

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

        class Cccopytable; //type: CiscoConfigCopyMib::Cccopytable
        class Cccopyerrortable; //type: CiscoConfigCopyMib::Cccopyerrortable

        std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopyerrortable> cccopyerrortable;
        std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopytable> cccopytable;
        
}; // CiscoConfigCopyMib


class CiscoConfigCopyMib::Cccopytable : public ydk::Entity
{
    public:
        Cccopytable();
        ~Cccopytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cccopyentry; //type: CiscoConfigCopyMib::Cccopytable::Cccopyentry

        std::vector<std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopytable::Cccopyentry> > cccopyentry;
        
}; // CiscoConfigCopyMib::Cccopytable


class CiscoConfigCopyMib::Cccopytable::Cccopyentry : public ydk::Entity
{
    public:
        Cccopyentry();
        ~Cccopyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cccopyindex; //type: uint32
        ydk::YLeaf cccopyprotocol; //type: Configcopyprotocol
        ydk::YLeaf cccopysourcefiletype; //type: Configfiletype
        ydk::YLeaf cccopydestfiletype; //type: Configfiletype
        ydk::YLeaf cccopyserveraddress; //type: string
        ydk::YLeaf cccopyfilename; //type: string
        ydk::YLeaf cccopyusername; //type: string
        ydk::YLeaf cccopyuserpassword; //type: string
        ydk::YLeaf cccopynotificationoncompletion; //type: boolean
        ydk::YLeaf cccopystate; //type: Configcopystate
        ydk::YLeaf cccopytimestarted; //type: uint32
        ydk::YLeaf cccopytimecompleted; //type: uint32
        ydk::YLeaf cccopyfailcause; //type: Configcopyfailcause
        ydk::YLeaf cccopyentryrowstatus; //type: Rowstatus
        ydk::YLeaf cccopyserveraddresstype; //type: Inetaddresstype
        ydk::YLeaf cccopyserveraddressrev1; //type: binary

}; // CiscoConfigCopyMib::Cccopytable::Cccopyentry


class CiscoConfigCopyMib::Cccopyerrortable : public ydk::Entity
{
    public:
        Cccopyerrortable();
        ~Cccopyerrortable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cccopyerrorentry; //type: CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry

        std::vector<std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry> > cccopyerrorentry;
        
}; // CiscoConfigCopyMib::Cccopyerrortable


class CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry : public ydk::Entity
{
    public:
        Cccopyerrorentry();
        ~Cccopyerrorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopytable::Cccopyentry::cccopyindex)
        ydk::YLeaf cccopyindex;
        ydk::YLeaf cccopyerrorindex; //type: uint32
        ydk::YLeaf cccopyerrordeviceipaddresstype; //type: Inetaddresstype
        ydk::YLeaf cccopyerrordeviceipaddress; //type: binary
        ydk::YLeaf cccopyerrordevicewwn; //type: binary
        ydk::YLeaf cccopyerrordescription; //type: string

}; // CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry

class Configcopyfailcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf badFileName;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf noMem;
        static const ydk::Enum::YLeaf noConfig;
        static const ydk::Enum::YLeaf unsupportedProtocol;
        static const ydk::Enum::YLeaf someConfigApplyFailed;
        static const ydk::Enum::YLeaf systemNotReady;
        static const ydk::Enum::YLeaf requestAborted;

};

class Configcopystate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf successful;
        static const ydk::Enum::YLeaf failed;

};

class Configcopyprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class Configfiletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf networkFile;
        static const ydk::Enum::YLeaf iosFile;
        static const ydk::Enum::YLeaf startupConfig;
        static const ydk::Enum::YLeaf runningConfig;
        static const ydk::Enum::YLeaf terminal;
        static const ydk::Enum::YLeaf fabricStartupConfig;

};


}
}

#endif /* _CISCO_CONFIG_COPY_MIB_ */

