#ifndef _CISCO_IOS_XE_NATIVE_129_
#define _CISCO_IOS_XE_NATIVE_129_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_124.hpp"
#include "Cisco_IOS_XE_native_128.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Pki::Trustpoint : public ydk::Entity
{
    public:
        Trustpoint();
        ~Trustpoint();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf fqdn; //type: string
        ydk::YLeaf revocation_check; //type: RevocationCheck
        ydk::YLeaf subject_name; //type: string
        ydk::YLeaf vrf; //type: string
        class Authorization; //type: Native::Crypto::Pki::Trustpoint::Authorization
        class Certificate; //type: Native::Crypto::Pki::Trustpoint::Certificate
        class AutoEnroll; //type: Native::Crypto::Pki::Trustpoint::AutoEnroll
        class Enrollment; //type: Native::Crypto::Pki::Trustpoint::Enrollment
        class Password; //type: Native::Crypto::Pki::Trustpoint::Password
        class Rsakeypair; //type: Native::Crypto::Pki::Trustpoint::Rsakeypair
        class SerialNumber; //type: Native::Crypto::Pki::Trustpoint::SerialNumber
        class IpAddress; //type: Native::Crypto::Pki::Trustpoint::IpAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Certificate> certificate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::AutoEnroll> auto_enroll;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment> enrollment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Password> password; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Rsakeypair> rsakeypair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::SerialNumber> serial_number; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::IpAddress> ip_address;
                class RevocationCheck;

}; // Native::Crypto::Pki::Trustpoint


class Native::Crypto::Pki::Trustpoint::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string
        ydk::YLeaf password; //type: string
        class Username; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username> username;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization


class Native::Crypto::Pki::Trustpoint::Authorization::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AltSubjectname; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname
        class Subjectname; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname> alt_subjectname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname> subjectname;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username


class Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname : public ydk::Entity
{
    public:
        AltSubjectname();
        ~AltSubjectname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf userprinciplename; //type: empty
        class UserprinciplenameConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf> userprinciplename_conf;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname


class Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf : public ydk::Entity
{
    public:
        UserprinciplenameConf();
        ~UserprinciplenameConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Userprinciplename; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf::Userprinciplename

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf::Userprinciplename> userprinciplename;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf::Userprinciplename : public ydk::Entity
{
    public:
        Userprinciplename();
        ~Userprinciplename();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::AltSubjectname::UserprinciplenameConf::Userprinciplename


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname : public ydk::Entity
{
    public:
        Subjectname();
        ~Subjectname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf commonname; //type: empty
        ydk::YLeaf country; //type: empty
        ydk::YLeaf email; //type: empty
        ydk::YLeaf ipaddress; //type: empty
        ydk::YLeaf locality; //type: empty
        ydk::YLeaf organization; //type: empty
        ydk::YLeaf organizationalunit; //type: empty
        ydk::YLeaf postalcode; //type: empty
        ydk::YLeaf serialnumber; //type: empty
        ydk::YLeaf state; //type: empty
        ydk::YLeaf streetaddress; //type: empty
        ydk::YLeaf title; //type: empty
        ydk::YLeaf unstructuredname; //type: empty
        class AllConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf
        class CommonnameConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf
        class CountryConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf
        class EmailConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf
        class IpaddressConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf
        class LocalityConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf
        class OrganizationConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf
        class OrganizationalunitConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf
        class PostalcodeConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf
        class SerialnumberConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf
        class StateConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf
        class StreetaddressConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf
        class TitleConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf
        class UnstructurednameConf; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf> all_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf> commonname_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf> country_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf> email_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf> ipaddress_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf> locality_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf> organization_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf> organizationalunit_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf> postalcode_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf> serialnumber_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf> state_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf> streetaddress_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf> title_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf> unstructuredname_conf;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf : public ydk::Entity
{
    public:
        AllConf();
        ~AllConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf::All> all;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::AllConf::All


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf : public ydk::Entity
{
    public:
        CommonnameConf();
        ~CommonnameConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Commonname; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf::Commonname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf::Commonname> commonname;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf::Commonname : public ydk::Entity
{
    public:
        Commonname();
        ~Commonname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CommonnameConf::Commonname


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf : public ydk::Entity
{
    public:
        CountryConf();
        ~CountryConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Country; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf::Country

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf::Country> country;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf::Country : public ydk::Entity
{
    public:
        Country();
        ~Country();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::CountryConf::Country


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf : public ydk::Entity
{
    public:
        EmailConf();
        ~EmailConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Email; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf::Email

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf::Email> email;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf::Email : public ydk::Entity
{
    public:
        Email();
        ~Email();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::EmailConf::Email


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf : public ydk::Entity
{
    public:
        IpaddressConf();
        ~IpaddressConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipaddress; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf::Ipaddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf::Ipaddress> ipaddress;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::IpaddressConf::Ipaddress


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf : public ydk::Entity
{
    public:
        LocalityConf();
        ~LocalityConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Locality; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf::Locality

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf::Locality> locality;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf::Locality : public ydk::Entity
{
    public:
        Locality();
        ~Locality();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::LocalityConf::Locality


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf : public ydk::Entity
{
    public:
        OrganizationConf();
        ~OrganizationConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Organization; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf::Organization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf::Organization> organization;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf::Organization : public ydk::Entity
{
    public:
        Organization();
        ~Organization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationConf::Organization


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf : public ydk::Entity
{
    public:
        OrganizationalunitConf();
        ~OrganizationalunitConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Organizationalunit; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf::Organizationalunit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf::Organizationalunit> organizationalunit;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf::Organizationalunit : public ydk::Entity
{
    public:
        Organizationalunit();
        ~Organizationalunit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::OrganizationalunitConf::Organizationalunit


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf : public ydk::Entity
{
    public:
        PostalcodeConf();
        ~PostalcodeConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Postalcode; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf::Postalcode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf::Postalcode> postalcode;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf::Postalcode : public ydk::Entity
{
    public:
        Postalcode();
        ~Postalcode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::PostalcodeConf::Postalcode


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf : public ydk::Entity
{
    public:
        SerialnumberConf();
        ~SerialnumberConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Serialnumber; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf::Serialnumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf::Serialnumber> serialnumber;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf::Serialnumber : public ydk::Entity
{
    public:
        Serialnumber();
        ~Serialnumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::SerialnumberConf::Serialnumber


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf : public ydk::Entity
{
    public:
        StateConf();
        ~StateConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf::State

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf::State> state;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StateConf::State


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf : public ydk::Entity
{
    public:
        StreetaddressConf();
        ~StreetaddressConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Streetaddress; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf::Streetaddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf::Streetaddress> streetaddress;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf::Streetaddress : public ydk::Entity
{
    public:
        Streetaddress();
        ~Streetaddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::StreetaddressConf::Streetaddress


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf : public ydk::Entity
{
    public:
        TitleConf();
        ~TitleConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Title; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf::Title

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf::Title> title;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf::Title : public ydk::Entity
{
    public:
        Title();
        ~Title();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::TitleConf::Title


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf : public ydk::Entity
{
    public:
        UnstructurednameConf();
        ~UnstructurednameConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Unstructuredname; //type: Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf::Unstructuredname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf::Unstructuredname> unstructuredname;
        
}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf


class Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf::Unstructuredname : public ydk::Entity
{
    public:
        Unstructuredname();
        ~Unstructuredname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Authorization::Username::Subjectname::UnstructurednameConf::Unstructuredname


class Native::Crypto::Pki::Trustpoint::Certificate : public ydk::Entity
{
    public:
        Certificate();
        ~Certificate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chain; //type: string

}; // Native::Crypto::Pki::Trustpoint::Certificate


class Native::Crypto::Pki::Trustpoint::AutoEnroll : public ydk::Entity
{
    public:
        AutoEnroll();
        ~AutoEnroll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf regenerate; //type: empty

}; // Native::Crypto::Pki::Trustpoint::AutoEnroll


class Native::Crypto::Pki::Trustpoint::Enrollment : public ydk::Entity
{
    public:
        Enrollment();
        ~Enrollment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf http_proxy; //type: string
        ydk::YLeaf pkcs12; //type: empty
        ydk::YLeaf profile; //type: string
        ydk::YLeaf selfsigned; //type: empty
        ydk::YLeaf url; //type: string
        class Mode; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Mode
        class Retry; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Retry
        class Terminal; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Terminal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Retry> retry;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Terminal> terminal; // presence node
        
}; // Native::Crypto::Pki::Trustpoint::Enrollment


class Native::Crypto::Pki::Trustpoint::Enrollment::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ra; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Mode


class Native::Crypto::Pki::Trustpoint::Enrollment::Retry : public ydk::Entity
{
    public:
        Retry();
        ~Retry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf period; //type: uint8

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Retry


class Native::Crypto::Pki::Trustpoint::Enrollment::Terminal : public ydk::Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pem; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Terminal


class Native::Crypto::Pki::Trustpoint::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf clear_password; //type: string

}; // Native::Crypto::Pki::Trustpoint::Password


class Native::Crypto::Pki::Trustpoint::Rsakeypair : public ydk::Entity
{
    public:
        Rsakeypair();
        ~Rsakeypair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_label; //type: string
        ydk::YLeaf gen_key; //type: uint16
        ydk::YLeaf encrypt_key; //type: uint16

}; // Native::Crypto::Pki::Trustpoint::Rsakeypair


class Native::Crypto::Pki::Trustpoint::SerialNumber : public ydk::Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Crypto::Pki::Trustpoint::SerialNumber


class Native::Crypto::Pki::Trustpoint::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_line; //type: string
        ydk::YLeaf none; //type: empty

}; // Native::Crypto::Pki::Trustpoint::IpAddress


class Native::Crypto::Pki::Certificate : public ydk::Entity
{
    public:
        Certificate();
        ~Certificate();

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

        ydk::YLeaf pool; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf validate; //type: string
        class Chain; //type: Native::Crypto::Pki::Certificate::Chain
        class Map; //type: Native::Crypto::Pki::Certificate::Map
        class Storage; //type: Native::Crypto::Pki::Certificate::Storage

        ydk::YList chain;
        ydk::YList map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Storage> storage;
        
}; // Native::Crypto::Pki::Certificate


class Native::Crypto::Pki::Certificate::Chain : public ydk::Entity
{
    public:
        Chain();
        ~Chain();

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

        ydk::YLeaf name; //type: string
        class Certificate_; //type: Native::Crypto::Pki::Certificate::Chain::Certificate_

        ydk::YList certificate;
        
}; // Native::Crypto::Pki::Certificate::Chain


class Native::Crypto::Pki::Certificate::Chain::Certificate_ : public ydk::Entity
{
    public:
        Certificate_();
        ~Certificate_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial; //type: string
        ydk::YLeaf certtype; //type: Certtype
        class Certtype;

}; // Native::Crypto::Pki::Certificate::Chain::Certificate_


class Native::Crypto::Pki::Certificate::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf sequence; //type: uint16
        class AltSubjectName; //type: Native::Crypto::Pki::Certificate::Map::AltSubjectName
        class ExpiresOn; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn
        class IssuerName; //type: Native::Crypto::Pki::Certificate::Map::IssuerName
        class Name; //type: Native::Crypto::Pki::Certificate::Map::Name
        class SerialNumber; //type: Native::Crypto::Pki::Certificate::Map::SerialNumber
        class SubjectName; //type: Native::Crypto::Pki::Certificate::Map::SubjectName
        class UnstructuredSubjectName; //type: Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName
        class ValidStart; //type: Native::Crypto::Pki::Certificate::Map::ValidStart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::AltSubjectName> alt_subject_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn> expires_on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::IssuerName> issuer_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::Name> name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::SerialNumber> serial_number;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::SubjectName> subject_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName> unstructured_subject_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart> valid_start;
        
}; // Native::Crypto::Pki::Certificate::Map


class Native::Crypto::Pki::Certificate::Map::AltSubjectName : public ydk::Entity
{
    public:
        AltSubjectName();
        ~AltSubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::AltSubjectName


class Native::Crypto::Pki::Certificate::Map::ExpiresOn : public ydk::Entity
{
    public:
        ExpiresOn();
        ~ExpiresOn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eq; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq
        class Ge; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge
        class Lt; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt
        class Ne; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq> eq;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge> ge;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt> lt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne> ne;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq : public ydk::Entity
{
    public:
        Eq();
        ~Eq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge : public ydk::Entity
{
    public:
        Ge();
        ~Ge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt : public ydk::Entity
{
    public:
        Lt();
        ~Lt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne : public ydk::Entity
{
    public:
        Ne();
        ~Ne();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time


class Native::Crypto::Pki::Certificate::Map::IssuerName : public ydk::Entity
{
    public:
        IssuerName();
        ~IssuerName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::IssuerName


class Native::Crypto::Pki::Certificate::Map::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::Name


class Native::Crypto::Pki::Certificate::Map::SerialNumber : public ydk::Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::SerialNumber


class Native::Crypto::Pki::Certificate::Map::SubjectName : public ydk::Entity
{
    public:
        SubjectName();
        ~SubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::SubjectName


class Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName : public ydk::Entity
{
    public:
        UnstructuredSubjectName();
        ~UnstructuredSubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName


class Native::Crypto::Pki::Certificate::Map::ValidStart : public ydk::Entity
{
    public:
        ValidStart();
        ~ValidStart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eq; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Eq
        class Ge; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ge
        class Lt; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Lt
        class Ne; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ne

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Eq> eq;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ge> ge;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Lt> lt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ne> ne;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart


class Native::Crypto::Pki::Certificate::Map::ValidStart::Eq : public ydk::Entity
{
    public:
        Eq();
        ~Eq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Eq


class Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ge : public ydk::Entity
{
    public:
        Ge();
        ~Ge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ge


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Lt : public ydk::Entity
{
    public:
        Lt();
        ~Lt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Lt


class Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ne : public ydk::Entity
{
    public:
        Ne();
        ~Ne();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ne


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time


class Native::Crypto::Pki::Certificate::Storage : public ydk::Entity
{
    public:
        Storage();
        ~Storage();

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

        ydk::YLeaf path; //type: string
        ydk::YLeaf on; //type: empty
        ydk::YLeaf with_keypair; //type: empty

}; // Native::Crypto::Pki::Certificate::Storage


class Native::Crypto::Pki::Crl : public ydk::Entity
{
    public:
        Crl();
        ~Crl();

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

        ydk::YLeaf request; //type: string
        class Cache; //type: Native::Crypto::Pki::Crl::Cache
        class Download; //type: Native::Crypto::Pki::Crl::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download> download;
        
}; // Native::Crypto::Pki::Crl


class Native::Crypto::Pki::Crl::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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

        ydk::YLeaf size; //type: uint32

}; // Native::Crypto::Pki::Crl::Cache


class Native::Crypto::Pki::Crl::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        ydk::YLeaf trustpoint; //type: string
        class Schedule; //type: Native::Crypto::Pki::Crl::Download::Schedule
        class Url; //type: Native::Crypto::Pki::Crl::Download::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule> schedule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Url> url;
        
}; // Native::Crypto::Pki::Crl::Download


class Native::Crypto::Pki::Crl::Download::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        ydk::YLeaf prepublish; //type: uint16
        class Retries; //type: Native::Crypto::Pki::Crl::Download::Schedule::Retries
        class Time; //type: Native::Crypto::Pki::Crl::Download::Schedule::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule::Retries> retries;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule::Time> time;
        
}; // Native::Crypto::Pki::Crl::Download::Schedule


class Native::Crypto::Pki::Crl::Download::Schedule::Retries : public ydk::Entity
{
    public:
        Retries();
        ~Retries();

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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf interval; //type: uint16

}; // Native::Crypto::Pki::Crl::Download::Schedule::Retries


class Native::Crypto::Pki::Crl::Download::Schedule::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

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

        ydk::YLeaf date; //type: Date
        ydk::YLeaf clock_; //type: string
        class Date;

}; // Native::Crypto::Pki::Crl::Download::Schedule::Time


class Native::Crypto::Pki::Crl::Download::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Crl::Download::Url


class Native::Crypto::Pki::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

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

        ydk::YLeaf name; //type: string
        class Pem; //type: Native::Crypto::Pki::Export::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Export::Pkcs12

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export::Pem> pem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export::Pkcs12> pkcs12;
        
}; // Native::Crypto::Pki::Export


class Native::Crypto::Pki::Export::Pem : public ydk::Entity
{
    public:
        Pem();
        ~Pem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Terminal; //type: Native::Crypto::Pki::Export::Pem::Terminal
        class Url; //type: Native::Crypto::Pki::Export::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export::Pem::Terminal> terminal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export::Pem::Url> url;
        
}; // Native::Crypto::Pki::Export::Pem


class Native::Crypto::Pki::Export::Pem::Terminal : public ydk::Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rollover; //type: empty
        class Pem3des; //type: Native::Crypto::Pki::Export::Pem::Terminal::Pem3des
        class Des; //type: Native::Crypto::Pki::Export::Pem::Terminal::Des

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export::Pem::Terminal::Pem3des> pem_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export::Pem::Terminal::Des> des;
        
}; // Native::Crypto::Pki::Export::Pem::Terminal


class Native::Crypto::Pki::Export::Pem::Terminal::Pem3des : public ydk::Entity
{
    public:
        Pem3des();
        ~Pem3des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Export::Pem::Terminal::Pem3des


class Native::Crypto::Pki::Export::Pem::Terminal::Des : public ydk::Entity
{
    public:
        Des();
        ~Des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Export::Pem::Terminal::Des


class Native::Crypto::Pki::Export::Pem::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: string
        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf password; //type: string
        class Encrypt;

}; // Native::Crypto::Pki::Export::Pem::Url


class Native::Crypto::Pki::Export::Pkcs12 : public ydk::Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: string
        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Export::Pkcs12


class Native::Crypto::Pki::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf certificate; //type: empty
        class Pem; //type: Native::Crypto::Pki::Import::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Import::Pkcs12

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem> pem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pkcs12> pkcs12;
        
}; // Native::Crypto::Pki::Import


class Native::Crypto::Pki::Import::Pem : public ydk::Entity
{
    public:
        Pem();
        ~Pem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf check; //type: empty
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf usage_keys; //type: empty
        class Terminal; //type: Native::Crypto::Pki::Import::Pem::Terminal
        class Url; //type: Native::Crypto::Pki::Import::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem::Terminal> terminal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem::Url> url;
        
}; // Native::Crypto::Pki::Import::Pem


class Native::Crypto::Pki::Import::Pem::Terminal : public ydk::Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Import::Pem::Terminal


class Native::Crypto::Pki::Import::Pem::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: string
        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Import::Pem::Url


class Native::Crypto::Pki::Import::Pkcs12 : public ydk::Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: string
        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Import::Pkcs12


class Native::Crypto::Pki::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        class Enrollment; //type: Native::Crypto::Pki::Profile::Enrollment

        ydk::YList enrollment;
        
}; // Native::Crypto::Pki::Profile


class Native::Crypto::Pki::Profile::Enrollment : public ydk::Entity
{
    public:
        Enrollment();
        ~Enrollment();

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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf method_est; //type: empty
        ydk::YLeaf source_interface; //type: string
        class Authentication; //type: Native::Crypto::Pki::Profile::Enrollment::Authentication
        class Enrollment_; //type: Native::Crypto::Pki::Profile::Enrollment::Enrollment_
        class Parameter; //type: Native::Crypto::Pki::Profile::Enrollment::Parameter
        class Reenrollment; //type: Native::Crypto::Pki::Profile::Enrollment::Reenrollment
        class Default; //type: Native::Crypto::Pki::Profile::Enrollment::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Enrollment_> enrollment;
        ydk::YList parameter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Reenrollment> reenrollment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default> default_;
        
}; // Native::Crypto::Pki::Profile::Enrollment


class Native::Crypto::Pki::Profile::Enrollment::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Authentication::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Authentication::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Authentication


class Native::Crypto::Pki::Profile::Enrollment::Authentication::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Authentication::Url


class Native::Crypto::Pki::Profile::Enrollment::Enrollment_ : public ydk::Entity
{
    public:
        Enrollment_();
        ~Enrollment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        ydk::YLeaf credential; //type: string
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Enrollment_


class Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url


class Native::Crypto::Pki::Profile::Enrollment::Parameter : public ydk::Entity
{
    public:
        Parameter();
        ~Parameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf prompt; //type: string
        ydk::YLeaf value_; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Parameter


class Native::Crypto::Pki::Profile::Enrollment::Reenrollment : public ydk::Entity
{
    public:
        Reenrollment();
        ~Reenrollment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Reenrollment


class Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url


class Native::Crypto::Pki::Profile::Enrollment::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_est; //type: empty
        ydk::YLeaf source_interface; //type: string
        class Authentication; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Authentication
        class Enrollment_; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_
        class Parameter; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Parameter
        class Reenrollment; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_> enrollment;
        ydk::YList parameter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment> reenrollment;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default


class Native::Crypto::Pki::Profile::Enrollment::Default::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default::Authentication


class Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default::Authentication::Url


class Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_ : public ydk::Entity
{
    public:
        Enrollment_();
        ~Enrollment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        ydk::YLeaf credential; //type: string
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_


class Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default::Enrollment_::Url


class Native::Crypto::Pki::Profile::Enrollment::Default::Parameter : public ydk::Entity
{
    public:
        Parameter();
        ~Parameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf prompt; //type: string
        ydk::YLeaf value_; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default::Parameter


class Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment : public ydk::Entity
{
    public:
        Reenrollment();
        ~Reenrollment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment


class Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default::Reenrollment::Url


class Native::Crypto::Pki::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf issuer_name; //type: string
        ydk::YLeaf grant; //type: Grant
        class Database; //type: Native::Crypto::Pki::Server::Database

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server::Database> database;
                class Grant;

}; // Native::Crypto::Pki::Server


class Native::Crypto::Pki::Server::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

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

        class Archive; //type: Native::Crypto::Pki::Server::Database::Archive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server::Database::Archive> archive;
        
}; // Native::Crypto::Pki::Server::Database


class Native::Crypto::Pki::Server::Database::Archive : public ydk::Entity
{
    public:
        Archive();
        ~Archive();

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

        class Pem; //type: Native::Crypto::Pki::Server::Database::Archive::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Server::Database::Archive::Pkcs12

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server::Database::Archive::Pem> pem; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server::Database::Archive::Pkcs12> pkcs12; // presence node
        
}; // Native::Crypto::Pki::Server::Database::Archive


class Native::Crypto::Pki::Server::Database::Archive::Pem : public ydk::Entity
{
    public:
        Pem();
        ~Pem();

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

        class Password; //type: Native::Crypto::Pki::Server::Database::Archive::Pem::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server::Database::Archive::Pem::Password> password;
        
}; // Native::Crypto::Pki::Server::Database::Archive::Pem


class Native::Crypto::Pki::Server::Database::Archive::Pem::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Pki::Server::Database::Archive::Pem::Password


class Native::Crypto::Pki::Server::Database::Archive::Pkcs12 : public ydk::Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

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

        class Password; //type: Native::Crypto::Pki::Server::Database::Archive::Pkcs12::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server::Database::Archive::Pkcs12::Password> password;
        
}; // Native::Crypto::Pki::Server::Database::Archive::Pkcs12


class Native::Crypto::Pki::Server::Database::Archive::Pkcs12::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Pki::Server::Database::Archive::Pkcs12::Password


class Native::Crypto::Pki::PkiServerNoSubmode : public ydk::Entity
{
    public:
        PkiServerNoSubmode();
        ~PkiServerNoSubmode();

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

        class Server; //type: Native::Crypto::Pki::PkiServerNoSubmode::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::PkiServerNoSubmode::Server> server;
        
}; // Native::Crypto::Pki::PkiServerNoSubmode


class Native::Crypto::Pki::PkiServerNoSubmode::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf rollover; //type: empty
        ydk::YLeaf cancel; //type: empty

}; // Native::Crypto::Pki::PkiServerNoSubmode::Server


class Native::Crypto::Pki::Token : public ydk::Entity
{
    public:
        Token();
        ~Token();

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

        class TokenName; //type: Native::Crypto::Pki::Token::TokenName

        ydk::YList token_name;
        
}; // Native::Crypto::Pki::Token


class Native::Crypto::Pki::Token::TokenName : public ydk::Entity
{
    public:
        TokenName();
        ~TokenName();

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

        ydk::YLeaf name; //type: string
        class Removal; //type: Native::Crypto::Pki::Token::TokenName::Removal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Token::TokenName::Removal> removal;
        
}; // Native::Crypto::Pki::Token::TokenName


class Native::Crypto::Pki::Token::TokenName::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint16

}; // Native::Crypto::Pki::Token::TokenName::Removal


class Native::Crypto::Pki::Trustpool : public ydk::Entity
{
    public:
        Trustpool();
        ~Trustpool();

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

        class Import; //type: Native::Crypto::Pki::Trustpool::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpool::Import> import; // presence node
        
}; // Native::Crypto::Pki::Trustpool


class Native::Crypto::Pki::Trustpool::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

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

        ydk::YLeaf clean; //type: empty
        ydk::YLeaf terminal; //type: empty
        ydk::YLeaf url; //type: string

}; // Native::Crypto::Pki::Trustpool::Import


class Native::Crypto::Pki::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class Removal; //type: Native::Crypto::Pki::Default::Removal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Default::Removal> removal;
        
}; // Native::Crypto::Pki::Default


class Native::Crypto::Pki::Default::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

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

        ydk::YLeaf timeout; //type: uint16

}; // Native::Crypto::Pki::Default::Removal


class Native::Crypto::TlsTunnel : public ydk::Entity
{
    public:
        TlsTunnel();
        ~TlsTunnel();

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

        class TlsTunnelList; //type: Native::Crypto::TlsTunnel::TlsTunnelList

        ydk::YList tls_tunnel_list;
        
}; // Native::Crypto::TlsTunnel


class Native::Crypto::TlsTunnel::TlsTunnelList : public ydk::Entity
{
    public:
        TlsTunnelList();
        ~TlsTunnelList();

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

        ydk::YLeaf tunnel_name; //type: string
        class LocalInterface; //type: Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface
        class OverlayAddress; //type: Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress
        class Protection; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Protection
        class Psk; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Psk
        class Server; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Server

        ydk::YList local_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress> overlay_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Protection> protection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Psk> psk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Server> server;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList


class Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface : public ydk::Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface


class Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress : public ydk::Entity
{
    public:
        OverlayAddress();
        ~OverlayAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addresses; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress


class Native::Crypto::TlsTunnel::TlsTunnelList::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection; //type: Protection_
        class Protection_;

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Protection


class Native::Crypto::TlsTunnel::TlsTunnelList::Psk : public ydk::Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id

        ydk::YList id;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::Psk


class Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class Key; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key> key;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id


class Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key


class Native::Crypto::TlsTunnel::TlsTunnelList::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4
        class Ipv6; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6

        ydk::YList ipv4;
        ydk::YList ipv6;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::Server


class Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf port; //type: uint32

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4


class Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf port; //type: uint32

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6


class Native::Crypto::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

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

        ydk::YLeaf policy; //type: string
        ydk::YLeaf profile; //type: string
        class Authorization; //type: Native::Crypto::Ssl::Authorization
        class Diagnose; //type: Native::Crypto::Ssl::Diagnose
        class Proposal; //type: Native::Crypto::Ssl::Proposal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl::Diagnose> diagnose;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl::Proposal> proposal;
        
}; // Native::Crypto::Ssl


class Native::Crypto::Ssl::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf policy; //type: string

}; // Native::Crypto::Ssl::Authorization


class Native::Crypto::Ssl::Diagnose : public ydk::Entity
{
    public:
        Diagnose();
        ~Diagnose();

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

        ydk::YLeaf error; //type: uint16

}; // Native::Crypto::Ssl::Diagnose


class Native::Crypto::Ssl::Proposal : public ydk::Entity
{
    public:
        Proposal();
        ~Proposal();

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

        ydk::YLeaf name; //type: string
        class Protection; //type: Native::Crypto::Ssl::Proposal::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ssl::Proposal::Protection> protection;
        
}; // Native::Crypto::Ssl::Proposal


class Native::Crypto::Ssl::Proposal::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf rsa_3des_ede_sha1; //type: empty
        ydk::YLeaf rsa_aes128_sha1; //type: empty
        ydk::YLeaf rsa_aes256_sha1; //type: empty
        ydk::YLeaf rsa_rc4128_md5; //type: empty

}; // Native::Crypto::Ssl::Proposal::Protection


class Native::Crypto::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

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

        ydk::YLeaf csd; //type: string
        class Anyconnect; //type: Native::Crypto::Vpn::Anyconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Vpn::Anyconnect> anyconnect;
        
}; // Native::Crypto::Vpn


class Native::Crypto::Vpn::Anyconnect : public ydk::Entity
{
    public:
        Anyconnect();
        ~Anyconnect();

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

        class File; //type: Native::Crypto::Vpn::Anyconnect::File
        class ProfileContainer; //type: Native::Crypto::Vpn::Anyconnect::ProfileContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Vpn::Anyconnect::File> file;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Vpn::Anyconnect::ProfileContainer> profile_container;
        
}; // Native::Crypto::Vpn::Anyconnect


class Native::Crypto::Vpn::Anyconnect::File : public ydk::Entity
{
    public:
        File();
        ~File();

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

        ydk::YLeaf filename; //type: string
        ydk::YLeaf sequence; //type: uint8

}; // Native::Crypto::Vpn::Anyconnect::File


class Native::Crypto::Vpn::Anyconnect::ProfileContainer : public ydk::Entity
{
    public:
        ProfileContainer();
        ~ProfileContainer();

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

        ydk::YLeaf profile; //type: string
        ydk::YLeaf filename; //type: string

}; // Native::Crypto::Vpn::Anyconnect::ProfileContainer


class Native::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

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

        ydk::YLeaf critical_authentication_conf; //type: empty
        ydk::YLeaf dot1x_server_timeout; //type: uint16
        ydk::YLeaf dot1x_supp_timeout; //type: uint16
        ydk::YLeaf logging; //type: Logging
        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf sg_epg; //type: SgEpg
        class Cache; //type: Native::Cts::Cache
        class CriticalAuthentication; //type: Native::Cts::CriticalAuthentication
        class Authorization; //type: Native::Cts::Authorization
        class RoleBased; //type: Native::Cts::RoleBased
        class Server; //type: Native::Cts::Server
        class Sxp; //type: Native::Cts::Sxp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication> critical_authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased> role_based;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp> sxp;
                class Logging;
        class SgEpg;

}; // Native::Cts


class Native::Cts::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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

        ydk::YLeaf enable; //type: empty
        class NvStorage; //type: Native::Cts::Cache::NvStorage

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Cache::NvStorage> nv_storage;
        
}; // Native::Cts::Cache


class Native::Cts::Cache::NvStorage : public ydk::Entity
{
    public:
        NvStorage();
        ~NvStorage();

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

        ydk::YLeaf nv_storage; //type: NvStorage_
        class NvStorage_;

}; // Native::Cts::Cache::NvStorage


class Native::Cts::CriticalAuthentication : public ydk::Entity
{
    public:
        CriticalAuthentication();
        ~CriticalAuthentication();

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

        class Default; //type: Native::Cts::CriticalAuthentication::Default
        class Fallback; //type: Native::Cts::CriticalAuthentication::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Fallback> fallback;
        
}; // Native::Cts::CriticalAuthentication

class Native::Crypto::Pki::Trustpoint::RevocationCheck : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf crl;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ocsp;

        static int get_enum_value(const std::string & name) {
            if (name == "crl") return 0;
            if (name == "none") return 1;
            if (name == "ocsp") return 2;
            return -1;
        }
};

class Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ca;
        static const ydk::Enum::YLeaf ra_encrypt;
        static const ydk::Enum::YLeaf ra_general;
        static const ydk::Enum::YLeaf ra_sign;
        static const ydk::Enum::YLeaf rollover;
        static const ydk::Enum::YLeaf self_signed;

        static int get_enum_value(const std::string & name) {
            if (name == "ca") return 0;
            if (name == "ra-encrypt") return 1;
            if (name == "ra-general") return 2;
            if (name == "ra-sign") return 3;
            if (name == "rollover") return 4;
            if (name == "self-signed") return 5;
            return -1;
        }
};

class Native::Crypto::Pki::Crl::Download::Schedule::Time::Date : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Friday;
        static const ydk::Enum::YLeaf Monday;
        static const ydk::Enum::YLeaf Saturday;
        static const ydk::Enum::YLeaf Sunday;
        static const ydk::Enum::YLeaf Thursday;
        static const ydk::Enum::YLeaf Tuesday;
        static const ydk::Enum::YLeaf Wednesday;

        static int get_enum_value(const std::string & name) {
            if (name == "Friday") return 0;
            if (name == "Monday") return 1;
            if (name == "Saturday") return 2;
            if (name == "Sunday") return 3;
            if (name == "Thursday") return 4;
            if (name == "Tuesday") return 5;
            if (name == "Wednesday") return 6;
            return -1;
        }
};

class Native::Crypto::Pki::Export::Pem::Url::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_3des;
        static const ydk::Enum::YLeaf des;

        static int get_enum_value(const std::string & name) {
            if (name == "3des") return 0;
            if (name == "des") return 1;
            return -1;
        }
};

class Native::Crypto::Pki::Server::Grant : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ra_auto;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "none") return 1;
            if (name == "ra-auto") return 2;
            return -1;
        }
};

class Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhe_psk_aes128_cbc_sha1;
        static const ydk::Enum::YLeaf dhe_psk_aes256_cbc_sha1;
        static const ydk::Enum::YLeaf psk_aes128_cbc_sha1;
        static const ydk::Enum::YLeaf psk_aes256_cbc_sha1;

        static int get_enum_value(const std::string & name) {
            if (name == "dhe-psk-aes128-cbc-sha1") return 0;
            if (name == "dhe-psk-aes256-cbc-sha1") return 1;
            if (name == "psk-aes128-cbc-sha1") return 2;
            if (name == "psk-aes256-cbc-sha1") return 3;
            return -1;
        }
};

class Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            return -1;
        }
};

class Native::Cts::Logging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf verbose;

        static int get_enum_value(const std::string & name) {
            if (name == "verbose") return 0;
            return -1;
        }
};

class Native::Cts::SgEpg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf translation;

        static int get_enum_value(const std::string & name) {
            if (name == "translation") return 0;
            return -1;
        }
};

class Native::Cts::Cache::NvStorage::NvStorage_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf crashinfo__COLON__;
        static const ydk::Enum::YLeaf kinfo__COLON__;
        static const ydk::Enum::YLeaf slot0__COLON__;
        static const ydk::Enum::YLeaf usb0__COLON__;

        static int get_enum_value(const std::string & name) {
            if (name == "bootflash:") return 0;
            if (name == "crashinfo:") return 1;
            if (name == "kinfo:") return 2;
            if (name == "slot0:") return 3;
            if (name == "usb0:") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_129_ */

