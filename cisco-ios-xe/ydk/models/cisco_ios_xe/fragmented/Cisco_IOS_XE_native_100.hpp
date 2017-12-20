#ifndef _CISCO_IOS_XE_NATIVE_100_
#define _CISCO_IOS_XE_NATIVE_100_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_96.hpp"
#include "Cisco_IOS_XE_native_99.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Isakmp::Profile::Default_::Isakmp_ : public ydk::Entity
{
    public:
        Isakmp_();
        ~Isakmp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Isakmp_


class Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization : public ydk::Entity
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

        ydk::YLeaf list; //type: empty

}; // Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization


class Native::Crypto::Isakmp::Profile::Default_::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Isakmp::Profile::Default_::Keepalive


class Native::Crypto::Isakmp::Profile::Default_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf certificate; //type: string
        class Identity; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity> identity;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        class Ipv4Address; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address
        class Address; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address
        class Host; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host
        class UserFqdn; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn : public ydk::Entity
{
    public:
        UserFqdn();
        ~UserFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch


class Native::Crypto::Isakmp::Profile::Default_::SelfIdentity : public ydk::Entity
{
    public:
        SelfIdentity();
        ~SelfIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Isakmp::Profile::Default_::SelfIdentity


class Native::Crypto::Isakmp::Profile::Ca : public ydk::Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust_point; //type: string

}; // Native::Crypto::Isakmp::Profile::Ca


class Native::Crypto::Isakmp::Profile::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Crypto::Isakmp::Profile::Client::Authentication
        class Configuration; //type: Native::Crypto::Isakmp::Profile::Client::Configuration
        class Pki; //type: Native::Crypto::Isakmp::Profile::Client::Pki

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Configuration> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Pki> pki;
        
}; // Native::Crypto::Isakmp::Profile::Client


class Native::Crypto::Isakmp::Profile::Client::Authentication : public ydk::Entity
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

        ydk::YLeaf list; //type: string

}; // Native::Crypto::Isakmp::Profile::Client::Authentication


class Native::Crypto::Isakmp::Profile::Client::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: Address
        ydk::YLeaf group; //type: string
        class Address;

}; // Native::Crypto::Isakmp::Profile::Client::Configuration


class Native::Crypto::Isakmp::Profile::Client::Pki : public ydk::Entity
{
    public:
        Pki();
        ~Pki();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Client::Pki::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Pki::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Client::Pki


class Native::Crypto::Isakmp::Profile::Client::Pki::Authorization : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Profile::Client::Pki::Authorization


class Native::Crypto::Isakmp::Profile::Initiate : public ydk::Entity
{
    public:
        Initiate();
        ~Initiate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Crypto::Isakmp::Profile::Initiate::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Initiate::Mode> mode; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Initiate


class Native::Crypto::Isakmp::Profile::Initiate::Mode : public ydk::Entity
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

        ydk::YLeaf aggressive; //type: empty

}; // Native::Crypto::Isakmp::Profile::Initiate::Mode


class Native::Crypto::Isakmp::Profile::Isakmp_ : public ydk::Entity
{
    public:
        Isakmp_();
        ~Isakmp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Isakmp_::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Isakmp_::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Isakmp_


class Native::Crypto::Isakmp::Profile::Isakmp_::Authorization : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Profile::Isakmp_::Authorization


class Native::Crypto::Isakmp::Profile::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf retry; //type: uint8

}; // Native::Crypto::Isakmp::Profile::Keepalive


class Native::Crypto::Isakmp::Profile::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf certificate; //type: string
        class Identity; //type: Native::Crypto::Isakmp::Profile::Match::Identity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity> identity;
        
}; // Native::Crypto::Isakmp::Profile::Match


class Native::Crypto::Isakmp::Profile::Match::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        class Ipv4Address; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address
        class Address; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Address
        class Host; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host
        class UserFqdn; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity


class Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address


class Native::Crypto::Isakmp::Profile::Match::Identity::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Address


class Native::Crypto::Isakmp::Profile::Match::Identity::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host


class Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName


class Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn : public ydk::Entity
{
    public:
        UserFqdn();
        ~UserFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch


class Native::Crypto::Isakmp::Profile::SelfIdentity : public ydk::Entity
{
    public:
        SelfIdentity();
        ~SelfIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_fqdn; //type: string
        class Address; //type: Native::Crypto::Isakmp::Profile::SelfIdentity::Address
        class Fqdn; //type: Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn> fqdn; // presence node
        
}; // Native::Crypto::Isakmp::Profile::SelfIdentity


class Native::Crypto::Isakmp::Profile::SelfIdentity::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: empty

}; // Native::Crypto::Isakmp::Profile::SelfIdentity::Address


class Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn : public ydk::Entity
{
    public:
        Fqdn();
        ~Fqdn();

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

}; // Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn


class Native::Crypto::Isakmp::Xauth : public ydk::Entity
{
    public:
        Xauth();
        ~Xauth();

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

        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Isakmp::Xauth


class Native::Crypto::Key : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf storage; //type: string
        class Decrypt; //type: Native::Crypto::Key::Decrypt
        class Encrypt; //type: Native::Crypto::Key::Encrypt
        class Export_; //type: Native::Crypto::Key::Export_
        class Generate; //type: Native::Crypto::Key::Generate
        class Import; //type: Native::Crypto::Key::Import
        class Move; //type: Native::Crypto::Key::Move
        class PubkeyChain; //type: Native::Crypto::Key::PubkeyChain
        class Zeroize; //type: Native::Crypto::Key::Zeroize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt> decrypt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt> encrypt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate> generate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Move> move;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain> pubkey_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize> zeroize;
        
}; // Native::Crypto::Key


class Native::Crypto::Key::Decrypt : public ydk::Entity
{
    public:
        Decrypt();
        ~Decrypt();

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

        class Ec; //type: Native::Crypto::Key::Decrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Rsa
        class Write; //type: Native::Crypto::Key::Decrypt::Write

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Rsa> rsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write> write;
        
}; // Native::Crypto::Key::Decrypt


class Native::Crypto::Key::Decrypt::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Ec


class Native::Crypto::Key::Decrypt::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Rsa


class Native::Crypto::Key::Decrypt::Write : public ydk::Entity
{
    public:
        Write();
        ~Write();

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

        class Ec; //type: Native::Crypto::Key::Decrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Write::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Decrypt::Write


class Native::Crypto::Key::Decrypt::Write::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Ec


class Native::Crypto::Key::Decrypt::Write::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Rsa


class Native::Crypto::Key::Encrypt : public ydk::Entity
{
    public:
        Encrypt();
        ~Encrypt();

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

        class Ec; //type: Native::Crypto::Key::Encrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Rsa
        class Write; //type: Native::Crypto::Key::Encrypt::Write

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Rsa> rsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write> write;
        
}; // Native::Crypto::Key::Encrypt


class Native::Crypto::Key::Encrypt::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Ec


class Native::Crypto::Key::Encrypt::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Rsa


class Native::Crypto::Key::Encrypt::Write : public ydk::Entity
{
    public:
        Write();
        ~Write();

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

        class Ec; //type: Native::Crypto::Key::Encrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Write::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Encrypt::Write


class Native::Crypto::Key::Encrypt::Write::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Write::Ec


class Native::Crypto::Key::Encrypt::Write::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Write::Rsa


class Native::Crypto::Key::Export_ : public ydk::Entity
{
    public:
        Export_();
        ~Export_();

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

        class Ec; //type: Native::Crypto::Key::Export_::Ec
        class Rsa; //type: Native::Crypto::Key::Export_::Rsa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec> > ec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa> > rsa;
        
}; // Native::Crypto::Key::Export_


class Native::Crypto::Key::Export_::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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

        ydk::YLeaf label; //type: string
        class Pem; //type: Native::Crypto::Key::Export_::Ec::Pem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem> pem;
        
}; // Native::Crypto::Key::Export_::Ec


class Native::Crypto::Key::Export_::Ec::Pem : public ydk::Entity
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

        class Terminal; //type: Native::Crypto::Key::Export_::Ec::Pem::Terminal
        class Url; //type: Native::Crypto::Key::Export_::Ec::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem::Terminal> terminal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem::Url> url;
        
}; // Native::Crypto::Key::Export_::Ec::Pem


class Native::Crypto::Key::Export_::Ec::Pem::Terminal : public ydk::Entity
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

        ydk::YLeaf pk_3des; //type: string
        ydk::YLeaf des; //type: string

}; // Native::Crypto::Key::Export_::Ec::Pem::Terminal


class Native::Crypto::Key::Export_::Ec::Pem::Url : public ydk::Entity
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

        ydk::YLeaf file; //type: File
        ydk::YLeaf url_3des; //type: string
        ydk::YLeaf des; //type: string
        class File;

}; // Native::Crypto::Key::Export_::Ec::Pem::Url


class Native::Crypto::Key::Export_::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf label; //type: string
        class Pem; //type: Native::Crypto::Key::Export_::Rsa::Pem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem> pem;
        
}; // Native::Crypto::Key::Export_::Rsa


class Native::Crypto::Key::Export_::Rsa::Pem : public ydk::Entity
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

        class Terminal; //type: Native::Crypto::Key::Export_::Rsa::Pem::Terminal
        class Url; //type: Native::Crypto::Key::Export_::Rsa::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem::Terminal> terminal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem::Url> url;
        
}; // Native::Crypto::Key::Export_::Rsa::Pem


class Native::Crypto::Key::Export_::Rsa::Pem::Terminal : public ydk::Entity
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

        ydk::YLeaf pk_3des; //type: string
        ydk::YLeaf des; //type: string

}; // Native::Crypto::Key::Export_::Rsa::Pem::Terminal


class Native::Crypto::Key::Export_::Rsa::Pem::Url : public ydk::Entity
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

        ydk::YLeaf file; //type: File
        ydk::YLeaf url_3des; //type: string
        ydk::YLeaf des; //type: string
        class File;

}; // Native::Crypto::Key::Export_::Rsa::Pem::Url


class Native::Crypto::Key::Generate : public ydk::Entity
{
    public:
        Generate();
        ~Generate();

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

        class Ec; //type: Native::Crypto::Key::Generate::Ec
        class Rsa; //type: Native::Crypto::Key::Generate::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate::Ec> ec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Generate


class Native::Crypto::Key::Generate::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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

        ydk::YLeaf keysize; //type: Keysize
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf label; //type: string
        class Keysize;

}; // Native::Crypto::Key::Generate::Ec


class Native::Crypto::Key::Generate::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf encryption; //type: empty
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf general_keys; //type: empty
        ydk::YLeaf label; //type: string
        ydk::YLeaf modulus; //type: uint16
        ydk::YLeaf on; //type: string
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf signature; //type: empty
        ydk::YLeaf storage; //type: string
        ydk::YLeaf usage_keys; //type: empty

}; // Native::Crypto::Key::Generate::Rsa


class Native::Crypto::Key::Import : public ydk::Entity
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

        class Ec; //type: Native::Crypto::Key::Import::Ec
        class Rsa; //type: Native::Crypto::Key::Import::Rsa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Ec> > ec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Rsa> > rsa;
        
}; // Native::Crypto::Key::Import


class Native::Crypto::Key::Import::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf terminal; //type: string
        class Url; //type: Native::Crypto::Key::Import::Ec::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Ec::Url> url;
        
}; // Native::Crypto::Key::Import::Ec


class Native::Crypto::Key::Import::Ec::Url : public ydk::Entity
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

        ydk::YLeaf file; //type: File
        ydk::YLeaf key; //type: string
        class File;

}; // Native::Crypto::Key::Import::Ec::Url


class Native::Crypto::Key::Import::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf label; //type: string
        ydk::YLeaf encryption; //type: empty
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf general_purpose; //type: empty
        ydk::YLeaf on; //type: string
        ydk::YLeaf pem; //type: empty
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf signature; //type: empty
        ydk::YLeaf storage; //type: string
        ydk::YLeaf usage_keys; //type: empty
        ydk::YLeaf terminal; //type: string
        class Url; //type: Native::Crypto::Key::Import::Rsa::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Rsa::Url> url;
        
}; // Native::Crypto::Key::Import::Rsa


class Native::Crypto::Key::Import::Rsa::Url : public ydk::Entity
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

        ydk::YLeaf file; //type: File
        ydk::YLeaf key; //type: string
        class File;

}; // Native::Crypto::Key::Import::Rsa::Url


class Native::Crypto::Key::Move : public ydk::Entity
{
    public:
        Move();
        ~Move();

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

        class Rsa; //type: Native::Crypto::Key::Move::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Move::Rsa> rsa;
        
}; // Native::Crypto::Key::Move


class Native::Crypto::Key::Move::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf label; //type: string
        ydk::YLeaf non_exportable; //type: empty
        ydk::YLeaf on; //type: string
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf storage; //type: string

}; // Native::Crypto::Key::Move::Rsa


class Native::Crypto::Key::PubkeyChain : public ydk::Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

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

        class Rsa; //type: Native::Crypto::Key::PubkeyChain::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa> rsa;
        
}; // Native::Crypto::Key::PubkeyChain


class Native::Crypto::Key::PubkeyChain::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        class AddressedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey
        class NamedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey> > addressed_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey> > named_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_> default_;
        
}; // Native::Crypto::Key::PubkeyChain::Rsa


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey : public ydk::Entity
{
    public:
        AddressedKey();
        ~AddressedKey();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf use; //type: Use
        ydk::YLeaf address; //type: string
        ydk::YLeaf serial_number; //type: string
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString> key_string;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_> default_;
                class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_data; //type: string
        ydk::YLeaf quit; //type: empty

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty
        ydk::YLeaf serial_number; //type: empty
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString> key_string; // presence node
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey : public ydk::Entity
{
    public:
        NamedKey();
        ~NamedKey();

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
        ydk::YLeaf use; //type: Use
        ydk::YLeaf address; //type: string
        ydk::YLeaf serial_number; //type: string
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString> key_string;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_> default_;
                class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_data; //type: string
        ydk::YLeaf quit; //type: empty

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty
        ydk::YLeaf serial_number; //type: empty
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString> key_string; // presence node
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        class AddressedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey
        class NamedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey> > addressed_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey> > named_key;
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey : public ydk::Entity
{
    public:
        AddressedKey();
        ~AddressedKey();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf use; //type: Use
        class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey


class Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey : public ydk::Entity
{
    public:
        NamedKey();
        ~NamedKey();

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
        ydk::YLeaf use; //type: Use
        class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey


class Native::Crypto::Key::Zeroize : public ydk::Entity
{
    public:
        Zeroize();
        ~Zeroize();

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

        class Ec; //type: Native::Crypto::Key::Zeroize::Ec
        class PubkeyChain; //type: Native::Crypto::Key::Zeroize::PubkeyChain
        class Rsa; //type: Native::Crypto::Key::Zeroize::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::PubkeyChain> pubkey_chain; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Zeroize


class Native::Crypto::Key::Zeroize::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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

        ydk::YLeaf label; //type: string

}; // Native::Crypto::Key::Zeroize::Ec


class Native::Crypto::Key::Zeroize::PubkeyChain : public ydk::Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

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

        ydk::YLeaf index_; //type: uint16

}; // Native::Crypto::Key::Zeroize::PubkeyChain


class Native::Crypto::Key::Zeroize::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf label; //type: string

}; // Native::Crypto::Key::Zeroize::Rsa


class Native::Crypto::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

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
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_address; //type: string
        class Default_; //type: Native::Crypto::Keyring::Default_
        class PreSharedKey; //type: Native::Crypto::Keyring::PreSharedKey
        class RsaPubkey; //type: Native::Crypto::Keyring::RsaPubkey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey> pre_shared_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey> rsa_pubkey;
        
}; // Native::Crypto::Keyring


class Native::Crypto::Keyring::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf local_address; //type: string
        class PreSharedKey; //type: Native::Crypto::Keyring::Default_::PreSharedKey
        class RsaPubkey; //type: Native::Crypto::Keyring::Default_::RsaPubkey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey> pre_shared_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey> rsa_pubkey;
        
}; // Native::Crypto::Keyring::Default_


class Native::Crypto::Keyring::Default_::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address
        class Hostname; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Hostname> > hostname;
        
}; // Native::Crypto::Keyring::Default_::PreSharedKey


class Native::Crypto::Keyring::Default_::PreSharedKey::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4
        class Ipv6; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6> > ipv6;
        
}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address


class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4


class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6 : public ydk::Entity
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

        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6


class Native::Crypto::Keyring::Default_::PreSharedKey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Hostname


class Native::Crypto::Keyring::Default_::RsaPubkey : public ydk::Entity
{
    public:
        RsaPubkey();
        ~RsaPubkey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addr; //type: Native::Crypto::Keyring::Default_::RsaPubkey::Addr
        class Hostname; //type: Native::Crypto::Keyring::Default_::RsaPubkey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey::Addr> addr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey::Hostname> hostname;
        
}; // Native::Crypto::Keyring::Default_::RsaPubkey


class Native::Crypto::Keyring::Default_::RsaPubkey::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::Default_::RsaPubkey::Addr


class Native::Crypto::Keyring::Default_::RsaPubkey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::Default_::RsaPubkey::Hostname


class Native::Crypto::Keyring::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Crypto::Keyring::PreSharedKey::Address
        class Hostname; //type: Native::Crypto::Keyring::PreSharedKey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Hostname> > hostname;
        
}; // Native::Crypto::Keyring::PreSharedKey


class Native::Crypto::Keyring::PreSharedKey::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Crypto::Keyring::PreSharedKey::Address::Ipv4
        class Ipv6; //type: Native::Crypto::Keyring::PreSharedKey::Address::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address::Ipv4> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address::Ipv6> > ipv6;
        
}; // Native::Crypto::Keyring::PreSharedKey::Address


class Native::Crypto::Keyring::PreSharedKey::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::PreSharedKey::Address::Ipv4


class Native::Crypto::Keyring::PreSharedKey::Address::Ipv6 : public ydk::Entity
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

        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::PreSharedKey::Address::Ipv6


class Native::Crypto::Keyring::PreSharedKey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::PreSharedKey::Hostname


class Native::Crypto::Keyring::RsaPubkey : public ydk::Entity
{
    public:
        RsaPubkey();
        ~RsaPubkey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addr; //type: Native::Crypto::Keyring::RsaPubkey::Addr
        class Hostname; //type: Native::Crypto::Keyring::RsaPubkey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey::Addr> addr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey::Hostname> hostname;
        
}; // Native::Crypto::Keyring::RsaPubkey


class Native::Crypto::Keyring::RsaPubkey::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::RsaPubkey::Addr


class Native::Crypto::Keyring::RsaPubkey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::RsaPubkey::Hostname


class Native::Crypto::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf ikev2; //type: empty
        ydk::YLeaf session; //type: empty
        class Ezvpn; //type: Native::Crypto::Logging::Ezvpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Logging::Ezvpn> ezvpn; // presence node
        
}; // Native::Crypto::Logging


class Native::Crypto::Logging::Ezvpn : public ydk::Entity
{
    public:
        Ezvpn();
        ~Ezvpn();

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

        ydk::YLeaf group; //type: string

}; // Native::Crypto::Logging::Ezvpn


class Native::Crypto::CryptoMap : public ydk::Entity
{
    public:
        CryptoMap();
        ~CryptoMap();

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

        class Map; //type: Native::Crypto::CryptoMap::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map> > map;
        
}; // Native::Crypto::CryptoMap


class Native::Crypto::CryptoMap::Map : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sequence_number; //type: uint16
        ydk::YLeaf keying; //type: Keying
        ydk::YLeaf dynamic; //type: string
        ydk::YLeaf profile; //type: string
        ydk::YLeaf description; //type: string
        class Default_; //type: Native::Crypto::CryptoMap::Map::Default_
        class Dialer; //type: Native::Crypto::CryptoMap::Map::Dialer
        class Match; //type: Native::Crypto::CryptoMap::Map::Match
        class Qos; //type: Native::Crypto::CryptoMap::Map::Qos
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::ReverseRoute
        class Set; //type: Native::Crypto::CryptoMap::Map::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set> set;
                class Keying;

}; // Native::Crypto::CryptoMap::Map


class Native::Crypto::CryptoMap::Map::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: empty
        class Dialer; //type: Native::Crypto::CryptoMap::Map::Default_::Dialer
        class Match; //type: Native::Crypto::CryptoMap::Map::Default_::Match
        class Qos; //type: Native::Crypto::CryptoMap::Map::Default_::Qos
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Default_::ReverseRoute
        class Set; //type: Native::Crypto::CryptoMap::Map::Default_::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set> set;
        
}; // Native::Crypto::CryptoMap::Map::Default_


class Native::Crypto::CryptoMap::Map::Default_::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Dialer


class Native::Crypto::CryptoMap::Map::Default_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Match


class Native::Crypto::CryptoMap::Map::Default_::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Qos


class Native::Crypto::CryptoMap::Map::Default_::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::ReverseRoute


class Native::Crypto::CryptoMap::Map::Default_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: empty
        ydk::YLeaf identity; //type: empty
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: empty
        ydk::YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::CryptoMap::Map::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::CryptoMap::Map::Default_::Set


class Native::Crypto::CryptoMap::Map::Default_::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::Pfs


class Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay> replay;
                class Level;

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: empty
        ydk::YLeaf kilobytes; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::CryptoMap::Map::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Dialer


class Native::Crypto::CryptoMap::Map::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: one of uint16, string

}; // Native::Crypto::CryptoMap::Map::Match


class Native::Crypto::CryptoMap::Map::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Qos


class Native::Crypto::CryptoMap::Map::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        class RemotePeerConatiner; //type: Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner> remote_peer_conatiner;
        
}; // Native::Crypto::CryptoMap::Map::ReverseRoute


class Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner : public ydk::Entity
{
    public:
        RemotePeerConatiner();
        ~RemotePeerConatiner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_peer; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf static_; //type: empty

}; // Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner


class Native::Crypto::CryptoMap::Map::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf identity; //type: string
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::CryptoMap::Map::Set::Peer
        class Pfs; //type: Native::Crypto::CryptoMap::Map::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::ReverseRoute> reverse_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::CryptoMap::Map::Set


class Native::Crypto::CryptoMap::Map::Set::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf dynamic; //type: empty

}; // Native::Crypto::CryptoMap::Map::Set::Peer


class Native::Crypto::CryptoMap::Map::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Crypto::CryptoMap::Map::Set::Pfs


class Native::Crypto::CryptoMap::Map::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf tag; //type: uint64

}; // Native::Crypto::CryptoMap::Map::Set::ReverseRoute


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: Dfbit
        ydk::YLeaf ecn; //type: Ecn
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay> replay;
                class Dfbit;
        class Ecn;
        class Level;

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay


class Native::Crypto::MapIpv6Gdoi : public ydk::Entity
{
    public:
        MapIpv6Gdoi();
        ~MapIpv6Gdoi();

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

        class Map; //type: Native::Crypto::MapIpv6Gdoi::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map> > map;
        
}; // Native::Crypto::MapIpv6Gdoi


class Native::Crypto::MapIpv6Gdoi::Map : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf gdoi; //type: Gdoi
        ydk::YLeaf activate; //type: empty
        class Default_; //type: Native::Crypto::MapIpv6Gdoi::Map::Default_
        class Match; //type: Native::Crypto::MapIpv6Gdoi::Map::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Match> match;
                class Gdoi;

}; // Native::Crypto::MapIpv6Gdoi::Map


class Native::Crypto::MapIpv6Gdoi::Map::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf activate; //type: empty
        class Match; //type: Native::Crypto::MapIpv6Gdoi::Map::Default_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Default_::Match> match;
        
}; // Native::Crypto::MapIpv6Gdoi::Map::Default_


class Native::Crypto::MapIpv6Gdoi::Map::Default_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Crypto::MapIpv6Gdoi::Map::Default_::Match


class Native::Crypto::MapIpv6Gdoi::Map::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: one of uint16, string

}; // Native::Crypto::MapIpv6Gdoi::Map::Match


class Native::Crypto::MapClient : public ydk::Entity
{
    public:
        MapClient();
        ~MapClient();

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

        class Map; //type: Native::Crypto::MapClient::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map> > map;
        
}; // Native::Crypto::MapClient


class Native::Crypto::MapClient::Map : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeaf local_address; //type: string
        class Client; //type: Native::Crypto::MapClient::Map::Client
        class Isakmp; //type: Native::Crypto::MapClient::Map::Isakmp
        class Redundancy; //type: Native::Crypto::MapClient::Map::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Redundancy> redundancy;
        
}; // Native::Crypto::MapClient::Map


class Native::Crypto::MapClient::Map::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: Native::Crypto::MapClient::Map::Client::Accounting
        class Authentication; //type: Native::Crypto::MapClient::Map::Client::Authentication
        class Configuration; //type: Native::Crypto::MapClient::Map::Client::Configuration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Configuration> configuration;
        
}; // Native::Crypto::MapClient::Map::Client


class Native::Crypto::MapClient::Map::Client::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

}; // Native::Crypto::MapClient::Map::Client::Accounting


class Native::Crypto::MapClient::Map::Client::Authentication : public ydk::Entity
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

        ydk::YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Client::Authentication


class Native::Crypto::MapClient::Map::Client::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Crypto::MapClient::Map::Client::Configuration::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Configuration::Address> address;
        
}; // Native::Crypto::MapClient::Map::Client::Configuration


class Native::Crypto::MapClient::Map::Client::Configuration::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initiate; //type: empty
        ydk::YLeaf respond; //type: empty

}; // Native::Crypto::MapClient::Map::Client::Configuration::Address


class Native::Crypto::MapClient::Map::Isakmp : public ydk::Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authorization; //type: empty
        ydk::YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Isakmp

class Native::Crypto::Isakmp::Profile::Client::Configuration::Address : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initiate;
        static const ydk::Enum::YLeaf respond;

};

class Native::Crypto::Key::Export_::Ec::Pem::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::Export_::Rsa::Pem::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::Generate::Ec::Keysize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_384;

};

class Native::Crypto::Key::Import::Ec::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf cns__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tar__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::Import::Rsa::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf cns__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tar__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::RsaPubkey::Addr::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::RsaPubkey::Hostname::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::CryptoMap::Map::Keying : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsec_isakmp;
        static const ydk::Enum::YLeaf ipsec_manual;
        static const ydk::Enum::YLeaf gdoi;
        static const ydk::Enum::YLeaf ckm;

};

class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::CryptoMap::Map::Set::Pfs::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group1;
        static const ydk::Enum::YLeaf group14;
        static const ydk::Enum::YLeaf group15;
        static const ydk::Enum::YLeaf group16;
        static const ydk::Enum::YLeaf group19;
        static const ydk::Enum::YLeaf group2;
        static const ydk::Enum::YLeaf group20;
        static const ydk::Enum::YLeaf group21;
        static const ydk::Enum::YLeaf group24;
        static const ydk::Enum::YLeaf group5;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::MapIpv6Gdoi::Map::Gdoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail_close;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_100_ */

