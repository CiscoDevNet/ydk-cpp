
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_66.hpp"
#include "Cisco_IOS_XE_native_68.hpp"
#include "Cisco_IOS_XE_native_67.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::VirtualTemplate::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
{
    yang_name = "mac"; yang_parent_name = "instance";
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_operation() const
{
    return is_set(operation)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
    	,
    maximum(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac";
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_data() const
{
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(operation)
	|| is_set(violation.operation)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{
    yang_name = "maximum"; yang_parent_name = "security";
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(addresses.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.operation)) leaf_name_data.push_back(addresses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addresses")
    {
        addresses = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::ServicePolicy()
{
    yang_name = "service-policy"; yang_parent_name = "instance";
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_data() const
{
    for (std::size_t index=0; index<input.size(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.size(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        for(auto const & c : input)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input>();
        c->parent = this;
        input.push_back(c);
        return c;
    }

    if(child_yang_name == "output")
    {
        for(auto const & c : output)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output>();
        c->parent = this;
        output.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : input)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : output)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation>())
	,mep(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep>())
	,mip(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;

    mep->parent = this;

    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance";
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_operation() const
{
    return is_set(operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        children["mip"] = mip;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q>())
{
    dot1ad->parent = this;

    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm";
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_data() const
{
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1ad"; yang_parent_name = "encapsulation";
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_data() const
{
    return cos.is_set
	|| dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dot1q.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Ad' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1q"; yang_parent_name = "encapsulation";
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::has_data() const
{
    return cos.is_set
	|| second_dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(second_dot1q.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.operation)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{
    yang_name = "mep"; yang_parent_name = "cfm";
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_data() const
{
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(mpid.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mep' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.operation)) leaf_name_data.push_back(mpid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "mpid")
    {
        mpid = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{
    yang_name = "mip"; yang_parent_name = "cfm";
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_data() const
{
    return level.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::L2Protocol()
    :
    forward(nullptr) // presence node
	,peer(nullptr) // presence node
	,tunnel(nullptr) // presence node
{
    yang_name = "l2protocol"; yang_parent_name = "instance";
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::~L2Protocol()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::has_data() const
{
    return (forward !=  nullptr && forward->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::has_operation() const
{
    return is_set(operation)
	|| (forward !=  nullptr && forward->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "peer"; yang_parent_name = "l2protocol";
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::~Peer()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "forward"; yang_parent_name = "l2protocol";
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::~Forward()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forward' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "tunnel"; yang_parent_name = "l2protocol";
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

Native::Interface::VirtualTemplate::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
    	,
    tlv(std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Cdp::~Cdp()
{
}

bool Native::Interface::VirtualTemplate::Cdp::has_data() const
{
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::VirtualTemplate::Cdp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cdp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::VirtualTemplate::Cdp::Tlv::Tlv()
    :
    location{YType::empty, "location"},
    server_location{YType::empty, "server-location"}
    	,
    app(nullptr) // presence node
{
    yang_name = "tlv"; yang_parent_name = "cdp";
}

Native::Interface::VirtualTemplate::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_data() const
{
    return location.is_set
	|| server_location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| is_set(server_location.operation)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cdp::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (server_location.is_set || is_set(server_location.operation)) leaf_name_data.push_back(server_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(app != nullptr)
    {
        children["app"] = app;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "server-location")
    {
        server_location = value;
    }
}

Native::Interface::VirtualTemplate::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{
    yang_name = "app"; yang_parent_name = "tlv";
}

Native::Interface::VirtualTemplate::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_data() const
{
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_operation() const
{
    return is_set(operation)
	|| is_set(tlvtype.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'App' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.operation)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::App::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tlvtype")
    {
        tlvtype = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::VirtualTemplate::Nhrp::Nhrp()
    :
    group{YType::str, "group"},
    route_watch{YType::boolean, "route-watch"}
    	,
    event_publisher(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::EventPublisher>())
	,map(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map>())
{
    event_publisher->parent = this;

    map->parent = this;

    yang_name = "nhrp"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Nhrp::~Nhrp()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::has_data() const
{
    return group.is_set
	|| route_watch.is_set
	|| (event_publisher !=  nullptr && event_publisher->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(route_watch.operation)
	|| (event_publisher !=  nullptr && event_publisher->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:nhrp";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Nhrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (route_watch.is_set || is_set(route_watch.operation)) leaf_name_data.push_back(route_watch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-publisher")
    {
        if(event_publisher == nullptr)
        {
            event_publisher = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::EventPublisher>();
        }
        return event_publisher;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_publisher != nullptr)
    {
        children["event-publisher"] = event_publisher;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "route-watch")
    {
        route_watch = value;
    }
}

Native::Interface::VirtualTemplate::Nhrp::EventPublisher::EventPublisher()
    :
    max_event_timeout{YType::uint8, "max-event-timeout"}
{
    yang_name = "event-publisher"; yang_parent_name = "nhrp";
}

Native::Interface::VirtualTemplate::Nhrp::EventPublisher::~EventPublisher()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_data() const
{
    return max_event_timeout.is_set;
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_operation() const
{
    return is_set(operation)
	|| is_set(max_event_timeout.operation);
}

std::string Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-publisher";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventPublisher' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_event_timeout.is_set || is_set(max_event_timeout.operation)) leaf_name_data.push_back(max_event_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::EventPublisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-event-timeout")
    {
        max_event_timeout = value;
    }
}

Native::Interface::VirtualTemplate::Nhrp::Map::Map()
    :
    group(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group>())
{
    group->parent = this;

    yang_name = "map"; yang_parent_name = "nhrp";
}

Native::Interface::VirtualTemplate::Nhrp::Map::~Map()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_operation() const
{
    return is_set(operation)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Nhrp::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::Group()
{
    yang_name = "group"; yang_parent_name = "map";
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::~Group()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_data() const
{
    for (std::size_t index=0; index<nhrp_name.size(); index++)
    {
        if(nhrp_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_operation() const
{
    for (std::size_t index=0; index<nhrp_name.size(); index++)
    {
        if(nhrp_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrp-name")
    {
        for(auto const & c : nhrp_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName>();
        c->parent = this;
        nhrp_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrp_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::NhrpName()
    :
    nhrp_name{YType::str, "nhrp-name"}
    	,
    service_policy(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "nhrp-name"; yang_parent_name = "group";
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::~NhrpName()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_data() const
{
    return nhrp_name.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_operation() const
{
    return is_set(operation)
	|| is_set(nhrp_name.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrp-name" <<"[nhrp-name='" <<nhrp_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhrpName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrp_name.is_set || is_set(nhrp_name.operation)) leaf_name_data.push_back(nhrp_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhrp-name")
    {
        nhrp_name = value;
    }
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "nhrp-name";
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_data() const
{
    return output.is_set;
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Tunnel()
    :
    checksum{YType::empty, "checksum"},
    destination{YType::str, "destination"},
    entropy{YType::empty, "entropy"},
    key{YType::uint64, "key"},
    raw_packet_interface{YType::str, "raw-packet-interface"},
    snooping{YType::enumeration, "snooping"},
    source{YType::str, "source"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    vrf{YType::str, "vrf"}
    	,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Bandwidth>())
	,dst_port(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::DstPort>())
	,endpoint(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint>())
	,fixup(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Fixup>())
	,flow(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Flow>())
	,mode(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode>())
	,mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls>())
	,network_id(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::NetworkId>())
	,path_mtu_discovery(nullptr) // presence node
	,protection(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Protection>())
	,rbscp(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Rbscp>())
	,src_port(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::SrcPort>())
	,tun_6rd(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6Rd>())
	,udlr(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Udlr>())
	,vlan(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Vlan>())
{
    bandwidth->parent = this;

    dst_port->parent = this;

    endpoint->parent = this;

    fixup->parent = this;

    flow->parent = this;

    mode->parent = this;

    mpls->parent = this;

    network_id->parent = this;

    protection->parent = this;

    rbscp->parent = this;

    src_port->parent = this;

    tun_6rd->parent = this;

    udlr->parent = this;

    vlan->parent = this;

    yang_name = "tunnel"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Tunnel::~Tunnel()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::has_data() const
{
    return checksum.is_set
	|| destination.is_set
	|| entropy.is_set
	|| key.is_set
	|| raw_packet_interface.is_set
	|| snooping.is_set
	|| source.is_set
	|| tos.is_set
	|| ttl.is_set
	|| vrf.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data())
	|| (fixup !=  nullptr && fixup->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network_id !=  nullptr && network_id->has_data())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (rbscp !=  nullptr && rbscp->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (tun_6rd !=  nullptr && tun_6rd->has_data())
	|| (udlr !=  nullptr && udlr->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(checksum.operation)
	|| is_set(destination.operation)
	|| is_set(entropy.operation)
	|| is_set(key.operation)
	|| is_set(raw_packet_interface.operation)
	|| is_set(snooping.operation)
	|| is_set(source.operation)
	|| is_set(tos.operation)
	|| is_set(ttl.operation)
	|| is_set(vrf.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (fixup !=  nullptr && fixup->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network_id !=  nullptr && network_id->has_operation())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (rbscp !=  nullptr && rbscp->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (tun_6rd !=  nullptr && tun_6rd->has_operation())
	|| (udlr !=  nullptr && udlr->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (entropy.is_set || is_set(entropy.operation)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (raw_packet_interface.is_set || is_set(raw_packet_interface.operation)) leaf_name_data.push_back(raw_packet_interface.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.operation)) leaf_name_data.push_back(snooping.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::DstPort>();
        }
        return dst_port;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "fixup")
    {
        if(fixup == nullptr)
        {
            fixup = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Fixup>();
        }
        return fixup;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network-id")
    {
        if(network_id == nullptr)
        {
            network_id = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::NetworkId>();
        }
        return network_id;
    }

    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "rbscp")
    {
        if(rbscp == nullptr)
        {
            rbscp = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Rbscp>();
        }
        return rbscp;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "tun-6rd")
    {
        if(tun_6rd == nullptr)
        {
            tun_6rd = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6Rd>();
        }
        return tun_6rd;
    }

    if(child_yang_name == "udlr")
    {
        if(udlr == nullptr)
        {
            udlr = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Udlr>();
        }
        return udlr;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(dst_port != nullptr)
    {
        children["dst-port"] = dst_port;
    }

    if(endpoint != nullptr)
    {
        children["endpoint"] = endpoint;
    }

    if(fixup != nullptr)
    {
        children["fixup"] = fixup;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(network_id != nullptr)
    {
        children["network-id"] = network_id;
    }

    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(rbscp != nullptr)
    {
        children["rbscp"] = rbscp;
    }

    if(src_port != nullptr)
    {
        children["src-port"] = src_port;
    }

    if(tun_6rd != nullptr)
    {
        children["tun-6rd"] = tun_6rd;
    }

    if(udlr != nullptr)
    {
        children["udlr"] = udlr;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "entropy")
    {
        entropy = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "raw-packet-interface")
    {
        raw_packet_interface = value;
    }
    if(value_path == "snooping")
    {
        snooping = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Tun6Rd()
    :
    br{YType::str, "br"},
    prefix{YType::str, "prefix"},
    reverse_map_check{YType::empty, "reverse-map-check"}
    	,
    ipv4(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "tun-6rd"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::~Tun6Rd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::has_data() const
{
    return br.is_set
	|| prefix.is_set
	|| reverse_map_check.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::has_operation() const
{
    return is_set(operation)
	|| is_set(br.operation)
	|| is_set(prefix.operation)
	|| is_set(reverse_map_check.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tun-6rd";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tun6Rd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (br.is_set || is_set(br.operation)) leaf_name_data.push_back(br.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (reverse_map_check.is_set || is_set(reverse_map_check.operation)) leaf_name_data.push_back(reverse_map_check.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "br")
    {
        br = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::Ipv4()
    :
    prefix_len{YType::uint8, "prefix-len"},
    suffix_len{YType::uint8, "suffix-len"}
{
    yang_name = "ipv4"; yang_parent_name = "tun-6rd";
}

Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::has_data() const
{
    return prefix_len.is_set
	|| suffix_len.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_len.operation)
	|| is_set(suffix_len.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (suffix_len.is_set || is_set(suffix_len.operation)) leaf_name_data.push_back(suffix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6Rd::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
    if(value_path == "suffix-len")
    {
        suffix_len = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Bandwidth::Bandwidth()
    :
    receive{YType::uint32, "receive"},
    transmit{YType::uint32, "transmit"}
{
    yang_name = "bandwidth"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(transmit.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::DstPort::DstPort()
    :
    dynamic{YType::empty, "dynamic"},
    port_num{YType::uint16, "port-num"}
{
    yang_name = "dst-port"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::DstPort::~DstPort()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_data() const
{
    return dynamic.is_set
	|| port_num.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(port_num.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::DstPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstPort' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.operation)) leaf_name_data.push_back(port_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::DstPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "port-num")
    {
        port_num = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::Endpoint()
    :
    service_policy(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "endpoint"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::~Endpoint()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_operation() const
{
    return is_set(operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Endpoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "endpoint";
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_data() const
{
    return output.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Fixup::Fixup()
    :
    nat{YType::empty, "nat"}
{
    yang_name = "fixup"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Fixup::~Fixup()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_data() const
{
    return nat.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_operation() const
{
    return is_set(operation)
	|| is_set(nat.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Fixup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixup";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Fixup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fixup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nat.is_set || is_set(nat.operation)) leaf_name_data.push_back(nat.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Fixup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Fixup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Fixup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nat")
    {
        nat = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Flow::Flow()
    :
    egress_records{YType::empty, "egress-records"}
{
    yang_name = "flow"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Flow::~Flow()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_data() const
{
    return egress_records.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_records.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_records.is_set || is_set(egress_records.operation)) leaf_name_data.push_back(egress_records.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-records")
    {
        egress_records = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mode()
    :
    ipv6{YType::empty, "ipv6"},
    udp{YType::enumeration, "udp"}
    	,
    ethernet(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet>())
	,gre(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre>())
	,ipip(nullptr) // presence node
	,ipsec(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec>())
	,ipv6ip(nullptr) // presence node
	,mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls>())
{
    ethernet->parent = this;

    gre->parent = this;

    ipsec->parent = this;

    mpls->parent = this;

    yang_name = "mode"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::~Mode()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_data() const
{
    return ipv6.is_set
	|| udp.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (ipip !=  nullptr && ipip->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (ipv6ip !=  nullptr && ipv6ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation)
	|| is_set(udp.operation)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (ipip !=  nullptr && ipip->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (ipv6ip !=  nullptr && ipv6ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (udp.is_set || is_set(udp.operation)) leaf_name_data.push_back(udp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "ipip")
    {
        if(ipip == nullptr)
        {
            ipip = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip>();
        }
        return ipip;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "ipv6ip")
    {
        if(ipv6ip == nullptr)
        {
            ipv6ip = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip>();
        }
        return ipv6ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    if(ipip != nullptr)
    {
        children["ipip"] = ipip;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(ipv6ip != nullptr)
    {
        children["ipv6ip"] = ipv6ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "udp")
    {
        udp = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipsec()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{
    yang_name = "ipsec"; yang_parent_name = "mode";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::~Ipsec()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "ipsec";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::Ipv6()
{
    yang_name = "ipv6"; yang_parent_name = "ipsec";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::~Ipv6()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::Mpls()
    :
    traffic_eng(nullptr) // presence node
{
    yang_name = "mpls"; yang_parent_name = "mode";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_data() const
{
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_operation() const
{
    return is_set(operation)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::TrafficEng()
    :
    gre_ip{YType::empty, "gre-ip"}
{
    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_data() const
{
    return gre_ip.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(gre_ip.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEng' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_ip.is_set || is_set(gre_ip.operation)) leaf_name_data.push_back(gre_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gre-ip")
    {
        gre_ip = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Ethernet()
    :
    gre{YType::enumeration, "gre"}
{
    yang_name = "ethernet"; yang_parent_name = "mode";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::~Ethernet()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_data() const
{
    return gre.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(gre.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre.is_set || is_set(gre.operation)) leaf_name_data.push_back(gre.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gre")
    {
        gre = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Gre()
    :
    ip{YType::empty, "ip"},
    ipv6{YType::empty, "ipv6"}
    	,
    multipoint(nullptr) // presence node
{
    yang_name = "gre"; yang_parent_name = "mode";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::~Gre()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_data() const
{
    return ip.is_set
	|| ipv6.is_set
	|| (multipoint !=  nullptr && multipoint->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(ipv6.operation)
	|| (multipoint !=  nullptr && multipoint->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gre' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipoint")
    {
        if(multipoint == nullptr)
        {
            multipoint = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint>();
        }
        return multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipoint != nullptr)
    {
        children["multipoint"] = multipoint;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::Multipoint()
    :
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "multipoint"; yang_parent_name = "gre";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::~Multipoint()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_data() const
{
    return ipv6.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::Ipip()
    :
    decapsulate_any{YType::empty, "decapsulate-any"}
{
    yang_name = "ipip"; yang_parent_name = "mode";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::~Ipip()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_data() const
{
    return decapsulate_any.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_operation() const
{
    return is_set(operation)
	|| is_set(decapsulate_any.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipip";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decapsulate_any.is_set || is_set(decapsulate_any.operation)) leaf_name_data.push_back(decapsulate_any.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::Ipv6Ip()
    :
    auto_6rd{YType::empty, "auto-6rd"},
    auto_6to4{YType::empty, "auto-6to4"},
    isatap{YType::empty, "isatap"}
{
    yang_name = "ipv6ip"; yang_parent_name = "mode";
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::~Ipv6Ip()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::has_data() const
{
    return auto_6rd.is_set
	|| auto_6to4.is_set
	|| isatap.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_6rd.operation)
	|| is_set(auto_6to4.operation)
	|| is_set(isatap.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_6rd.is_set || is_set(auto_6rd.operation)) leaf_name_data.push_back(auto_6rd.get_name_leafdata());
    if (auto_6to4.is_set || is_set(auto_6to4.operation)) leaf_name_data.push_back(auto_6to4.get_name_leafdata());
    if (isatap.is_set || is_set(isatap.operation)) leaf_name_data.push_back(isatap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-6rd")
    {
        auto_6rd = value;
    }
    if(value_path == "auto-6to4")
    {
        auto_6to4 = value;
    }
    if(value_path == "isatap")
    {
        isatap = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::NetworkId()
    :
    id{YType::uint16, "id"},
    nexthop{YType::str, "nexthop"},
    qos{YType::str, "qos"},
    weight{YType::uint16, "weight"}
{
    yang_name = "network-id"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::~NetworkId()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_data() const
{
    return id.is_set
	|| nexthop.is_set
	|| qos.is_set
	|| weight.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(nexthop.operation)
	|| is_set(qos.operation)
	|| is_set(weight.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.operation)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (qos.is_set || is_set(qos.operation)) leaf_name_data.push_back(qos.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
    }
    if(value_path == "qos")
    {
        qos = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::PathMtuDiscovery()
{
    yang_name = "path-mtu-discovery"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathMtuDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Protection::Protection()
{
    yang_name = "protection"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Protection::~Protection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::Mpls()
    :
    traffic_eng(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng>())
{
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_data() const
{
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_operation() const
{
    return is_set(operation)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::TrafficEng()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    affinity(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity>())
	,auto_bw(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw>())
	,autoroute(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute>())
	,fast_reroute(nullptr) // presence node
	,path_option(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption>())
	,path_selection(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection>())
	,priority(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority>())
{
    affinity->parent = this;

    auto_bw->parent = this;

    autoroute->parent = this;

    path_option->parent = this;

    path_selection->parent = this;

    priority->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_data() const
{
    return bandwidth.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (path_option !=  nullptr && path_option->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (path_option !=  nullptr && path_option->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEng' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(path_option != nullptr)
    {
        children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::Affinity()
    :
    attributes{YType::str, "attributes"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::~Affinity()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::has_data() const
{
    return attributes.is_set
	|| mask.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::has_operation() const
{
    return is_set(operation)
	|| is_set(attributes.operation)
	|| is_set(mask.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes.is_set || is_set(attributes.operation)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attributes")
    {
        attributes = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    max_bw{YType::uint32, "max-bw"}
{
    yang_name = "auto-bw"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_data() const
{
    return max_bw.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bw.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bw.is_set || is_set(max_bw.operation)) leaf_name_data.push_back(max_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-bw")
    {
        max_bw = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Autoroute()
    :
    announce{YType::empty, "announce"},
    destination{YType::empty, "destination"}
    	,
    metric(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric>())
{
    metric->parent = this;

    yang_name = "autoroute"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::~Autoroute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_data() const
{
    return announce.is_set
	|| destination.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_operation() const
{
    return is_set(operation)
	|| is_set(announce.operation)
	|| is_set(destination.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce.is_set || is_set(announce.operation)) leaf_name_data.push_back(announce.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce")
    {
        announce = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::Metric()
    :
    absolute{YType::uint32, "absolute"},
    range{YType::uint32, "range"},
    relative{YType::int8, "relative"}
{
    yang_name = "metric"; yang_parent_name = "autoroute";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::~Metric()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_data() const
{
    return absolute.is_set
	|| range.is_set
	|| relative.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute.operation)
	|| is_set(range.operation)
	|| is_set(relative.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute.is_set || is_set(absolute.operation)) leaf_name_data.push_back(absolute.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (relative.is_set || is_set(relative.operation)) leaf_name_data.push_back(relative.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute")
    {
        absolute = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "relative")
    {
        relative = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::Priority()
    :
    hold_priority{YType::uint8, "hold-priority"},
    setup_priority{YType::uint8, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::~Priority()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::PathOption()
{
    yang_name = "path-option"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_data() const
{
    for (std::size_t index=0; index<protect.size(); index++)
    {
        if(protect[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<working.size(); index++)
    {
        if(working[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_operation() const
{
    for (std::size_t index=0; index<protect.size(); index++)
    {
        if(protect[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<working.size(); index++)
    {
        if(working[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect")
    {
        for(auto const & c : protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect>();
        c->parent = this;
        protect.push_back(c);
        return c;
    }

    if(child_yang_name == "working")
    {
        for(auto const & c : working)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working>();
        c->parent = this;
        working.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protect)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : working)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Working()
    :
    id{YType::uint32, "id"}
    	,
    dynamic(nullptr) // presence node
	,explicit_(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_>())
	,lockdown(nullptr) // presence node
{
    explicit_->parent = this;

    yang_name = "working"; yang_parent_name = "path-option";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::~Working()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_data() const
{
    return id.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (lockdown !=  nullptr && lockdown->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (lockdown !=  nullptr && lockdown->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Working' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_>();
        }
        return explicit_;
    }

    if(child_yang_name == "lockdown")
    {
        if(lockdown == nullptr)
        {
            lockdown = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown>();
        }
        return lockdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    if(lockdown != nullptr)
    {
        children["lockdown"] = lockdown;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Dynamic()
    :
    pce(nullptr) // presence node
	,segment_routing(nullptr) // presence node
{
    yang_name = "dynamic"; yang_parent_name = "working";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::~Dynamic()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_data() const
{
    return (pce !=  nullptr && pce->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_operation() const
{
    return is_set(operation)
	|| (pce !=  nullptr && pce->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::Pce()
    :
    address{YType::str, "address"},
    segment_routing{YType::empty, "segment-routing"}
{
    yang_name = "pce"; yang_parent_name = "dynamic";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::~Pce()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::has_data() const
{
    return address.is_set
	|| segment_routing.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(segment_routing.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Pce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::SegmentRouting()
    :
    pce(nullptr) // presence node
{
    yang_name = "segment-routing"; yang_parent_name = "dynamic";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_data() const
{
    return (pce !=  nullptr && pce->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| (pce !=  nullptr && pce->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce>();
        }
        return pce;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::Pce()
    :
    address{YType::str, "address"}
{
    yang_name = "pce"; yang_parent_name = "segment-routing";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::~Pce()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::has_data() const
{
    return address.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::Pce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Explicit_()
    :
    identifier{YType::uint32, "identifier"}
    	,
    name(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name>())
{
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "working";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::~Explicit_()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::has_data() const
{
    return identifier.is_set
	|| (name !=  nullptr && name->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Explicit_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::Name()
    :
    exp_name{YType::str, "exp-name"},
    segment_routing{YType::empty, "segment-routing"}
{
    yang_name = "name"; yang_parent_name = "explicit";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::~Name()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::has_data() const
{
    return exp_name.is_set
	|| segment_routing.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(exp_name.operation)
	|| is_set(segment_routing.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_name.is_set || is_set(exp_name.operation)) leaf_name_data.push_back(exp_name.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp-name")
    {
        exp_name = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::Lockdown()
{
    yang_name = "lockdown"; yang_parent_name = "working";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::~Lockdown()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lockdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Lockdown::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Protect()
    :
    id{YType::str, "id"}
    	,
    explicit_(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_>())
	,lockdown(nullptr) // presence node
{
    explicit_->parent = this;

    yang_name = "protect"; yang_parent_name = "path-option";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::~Protect()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_data() const
{
    return id.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (lockdown !=  nullptr && lockdown->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (lockdown !=  nullptr && lockdown->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_>();
        }
        return explicit_;
    }

    if(child_yang_name == "lockdown")
    {
        if(lockdown == nullptr)
        {
            lockdown = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown>();
        }
        return lockdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    if(lockdown != nullptr)
    {
        children["lockdown"] = lockdown;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Explicit_()
    :
    identifier{YType::uint32, "identifier"},
    name{YType::str, "name"}
{
    yang_name = "explicit"; yang_parent_name = "protect";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::~Explicit_()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_data() const
{
    return identifier.is_set
	|| name.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Explicit_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::Lockdown()
{
    yang_name = "lockdown"; yang_parent_name = "protect";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::~Lockdown()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lockdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Lockdown::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::FastReroute()
{
    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"}
    	,
    invalidation(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;

    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_data() const
{
    return metric.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{
    yang_name = "invalidation"; yang_parent_name = "path-selection";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalidation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency>())
{
    adjacency->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "path-selection";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_data() const
{
    return (adjacency !=  nullptr && adjacency->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| (adjacency !=  nullptr && adjacency->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency")
    {
        if(adjacency == nullptr)
        {
            adjacency = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency>();
        }
        return adjacency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency != nullptr)
    {
        children["adjacency"] = adjacency;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::Adjacency()
    :
    protected_{YType::empty, "protected"},
    unprotected{YType::empty, "unprotected"}
{
    yang_name = "adjacency"; yang_parent_name = "segment-routing";
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::~Adjacency()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::has_data() const
{
    return protected_.is_set
	|| unprotected.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_.operation)
	|| is_set(unprotected.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Adjacency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (unprotected.is_set || is_set(unprotected.operation)) leaf_name_data.push_back(unprotected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected")
    {
        protected_ = value;
    }
    if(value_path == "unprotected")
    {
        unprotected = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Rbscp::Rbscp()
    :
    ack_split{YType::uint8, "ack-split"},
    delay{YType::empty, "delay"},
    input_drop{YType::uint8, "input-drop"},
    long_drop{YType::empty, "long-drop"},
    report{YType::empty, "report"},
    window_stuff{YType::uint8, "window-stuff"}
{
    yang_name = "rbscp"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Rbscp::~Rbscp()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_data() const
{
    return ack_split.is_set
	|| delay.is_set
	|| input_drop.is_set
	|| long_drop.is_set
	|| report.is_set
	|| window_stuff.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_split.operation)
	|| is_set(delay.operation)
	|| is_set(input_drop.operation)
	|| is_set(long_drop.operation)
	|| is_set(report.operation)
	|| is_set(window_stuff.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbscp";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rbscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_split.is_set || is_set(ack_split.operation)) leaf_name_data.push_back(ack_split.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (input_drop.is_set || is_set(input_drop.operation)) leaf_name_data.push_back(input_drop.get_name_leafdata());
    if (long_drop.is_set || is_set(long_drop.operation)) leaf_name_data.push_back(long_drop.get_name_leafdata());
    if (report.is_set || is_set(report.operation)) leaf_name_data.push_back(report.get_name_leafdata());
    if (window_stuff.is_set || is_set(window_stuff.operation)) leaf_name_data.push_back(window_stuff.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Rbscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-split")
    {
        ack_split = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "input-drop")
    {
        input_drop = value;
    }
    if(value_path == "long-drop")
    {
        long_drop = value;
    }
    if(value_path == "report")
    {
        report = value;
    }
    if(value_path == "window-stuff")
    {
        window_stuff = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::SrcPort::SrcPort()
    :
    dynamic{YType::empty, "dynamic"},
    port_num{YType::uint16, "port-num"}
{
    yang_name = "src-port"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::SrcPort::~SrcPort()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_data() const
{
    return dynamic.is_set
	|| port_num.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(port_num.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcPort' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.operation)) leaf_name_data.push_back(port_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::SrcPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "port-num")
    {
        port_num = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Udlr::Udlr()
    :
    address_resolution{YType::empty, "address-resolution"},
    receive_only{YType::str, "receive-only"},
    send_only{YType::str, "send-only"}
{
    yang_name = "udlr"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Udlr::~Udlr()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_data() const
{
    return address_resolution.is_set
	|| receive_only.is_set
	|| send_only.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_operation() const
{
    return is_set(operation)
	|| is_set(address_resolution.operation)
	|| is_set(receive_only.operation)
	|| is_set(send_only.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Udlr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udlr";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Udlr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udlr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_resolution.is_set || is_set(address_resolution.operation)) leaf_name_data.push_back(address_resolution.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.operation)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.operation)) leaf_name_data.push_back(send_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Udlr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Udlr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Udlr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-resolution")
    {
        address_resolution = value;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
    }
    if(value_path == "send-only")
    {
        send_only = value;
    }
}

Native::Interface::VirtualTemplate::Tunnel::Vlan::Vlan()
    :
    hyphen{YType::empty, "hyphen"},
    id1{YType::uint16, "id1"},
    id2{YType::uint16, "id2"}
{
    yang_name = "vlan"; yang_parent_name = "tunnel";
}

Native::Interface::VirtualTemplate::Tunnel::Vlan::~Vlan()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_data() const
{
    return hyphen.is_set
	|| id1.is_set
	|| id2.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(hyphen.operation)
	|| is_set(id1.operation)
	|| is_set(id2.operation);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Tunnel::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hyphen.is_set || is_set(hyphen.operation)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (id2.is_set || is_set(id2.operation)) leaf_name_data.push_back(id2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hyphen")
    {
        hyphen = value;
    }
    if(value_path == "id1")
    {
        id1 = value;
    }
    if(value_path == "id2")
    {
        id2 = value;
    }
}

Native::Interface::VirtualTemplate::Crypto::Crypto()
    :
    ipsec(std::make_shared<Native::Interface::VirtualTemplate::Crypto::Ipsec>())
	,map(std::make_shared<Native::Interface::VirtualTemplate::Crypto::Map>())
{
    ipsec->parent = this;

    map->parent = this;

    yang_name = "crypto"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Crypto::~Crypto()
{
}

bool Native::Interface::VirtualTemplate::Crypto::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::VirtualTemplate::Crypto::has_operation() const
{
    return is_set(operation)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::VirtualTemplate::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Crypto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crypto' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::VirtualTemplate::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::VirtualTemplate::Crypto::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Crypto::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Crypto::Map::Map()
    :
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"},
    tag{YType::str, "tag"}
{
    yang_name = "map"; yang_parent_name = "crypto";
}

Native::Interface::VirtualTemplate::Crypto::Map::~Map()
{
}

bool Native::Interface::VirtualTemplate::Crypto::Map::has_data() const
{
    return redundancy.is_set
	|| stateful.is_set
	|| tag.is_set;
}

bool Native::Interface::VirtualTemplate::Crypto::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(redundancy.operation)
	|| is_set(stateful.operation)
	|| is_set(tag.operation);
}

std::string Native::Interface::VirtualTemplate::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Crypto::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Crypto::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::VirtualTemplate::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{
    yang_name = "ipsec"; yang_parent_name = "crypto";
}

Native::Interface::VirtualTemplate::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::VirtualTemplate::Crypto::Ipsec::has_data() const
{
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::VirtualTemplate::Crypto::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(df_bit.operation)
	|| is_set(fragmentation.operation);
}

std::string Native::Interface::VirtualTemplate::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Crypto::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.operation)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.operation)) leaf_name_data.push_back(fragmentation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Crypto::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
    }
}

Native::Interface::VirtualTemplate::Cts::Cts()
    :
    manual(nullptr) // presence node
{
    yang_name = "cts"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Cts::~Cts()
{
}

bool Native::Interface::VirtualTemplate::Cts::has_data() const
{
    return (manual !=  nullptr && manual->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::has_operation() const
{
    return is_set(operation)
	|| (manual !=  nullptr && manual->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cts' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual>();
        }
        return manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy>())
	,propagate(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Propagate>())
	,sap(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap>())
{
    policy->parent = this;

    propagate->parent = this;

    sap->parent = this;

    yang_name = "manual"; yang_parent_name = "cts";
}

Native::Interface::VirtualTemplate::Cts::Manual::~Manual()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (propagate !=  nullptr && propagate->has_data())
	|| (sap !=  nullptr && sap->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::has_operation() const
{
    return is_set(operation)
	|| (policy !=  nullptr && policy->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation())
	|| (sap !=  nullptr && sap->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manual' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap>();
        }
        return sap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(propagate != nullptr)
    {
        children["propagate"] = propagate;
    }

    if(sap != nullptr)
    {
        children["sap"] = sap;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual";
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::has_operation() const
{
    return is_set(operation)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Policy::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::Static_()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{
    yang_name = "static"; yang_parent_name = "policy";
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::~Static_()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::has_data() const
{
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation)
	|| is_set(trusted.operation);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Sap()
{
    yang_name = "sap"; yang_parent_name = "manual";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        for(auto const & c : pmk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmk)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{
    yang_name = "mode-list"; yang_parent_name = "pmk";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(operation)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{
    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(operation)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GcmEncrypt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{
    yang_name = "gmac"; yang_parent_name = "gcm-encrypt";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(operation)
	|| is_set(null.operation);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{
    yang_name = "no-encap"; yang_parent_name = "mode-list";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(operation)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoEncap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{
    yang_name = "gmac"; yang_parent_name = "no-encap";
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(operation)
	|| is_set(gcm_encrypt.operation);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.operation)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
    }
}

Native::Interface::VirtualTemplate::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{
    yang_name = "propagate"; yang_parent_name = "manual";
}

Native::Interface::VirtualTemplate::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Propagate::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Cts::Manual::Propagate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Propagate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Interface::VirtualTemplate::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::VirtualTemplate::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(history.operation)
	|| is_set(input.operation)
	|| is_set(output.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;

    performance_monitor->parent = this;

    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy";
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::has_operation() const
{
    return is_set(operation)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{
    yang_name = "control"; yang_parent_name = "type";
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber.operation);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Control' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.operation)) leaf_name_data.push_back(subscriber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
    }
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "performance-monitor"; yang_parent_name = "type";
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type";
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-chain";
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-chain";
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::VirtualTemplate::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap>())
{
    ifindex->parent = this;

    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Snmp::~Snmp()
{
}

bool Native::Interface::VirtualTemplate::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::has_operation() const
{
    return is_set(operation)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Snmp::Ifindex::Ifindex()
    :
    clear{YType::boolean, "clear"},
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp";
}

Native::Interface::VirtualTemplate::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_data() const
{
    return clear.is_set
	|| persist.is_set;
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_operation() const
{
    return is_set(operation)
	|| is_set(clear.operation)
	|| is_set(persist.operation);
}

std::string Native::Interface::VirtualTemplate::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Snmp::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifindex' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.operation)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (persist.is_set || is_set(persist.operation)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Ifindex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear")
    {
        clear = value;
    }
    if(value_path == "persist")
    {
        persist = value;
    }
}

Native::Interface::VirtualTemplate::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
    	,
    link_status_capas(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp";
}

Native::Interface::VirtualTemplate::Snmp::Trap::~Trap()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_data() const
{
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(link_status.operation)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Snmp::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status_capas != nullptr)
    {
        children["link-status-capas"] = link_status_capas;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-status")
    {
        link_status = value;
    }
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap";
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(operation)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkStatusCapas' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas";
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(operation)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{
    yang_name = "permit"; yang_parent_name = "link-status";
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    return duplicates.is_set;
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicates.operation);
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.operation)) leaf_name_data.push_back(duplicates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Ppp()
    :
    accounting{YType::str, "accounting"},
    authorization{YType::str, "authorization"}
    	,
    authentication(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Authentication>())
	,chap(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Chap>())
	,ipcp(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp>())
	,multilink(nullptr) // presence node
{
    authentication->parent = this;

    chap->parent = this;

    ipcp->parent = this;

    yang_name = "ppp"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Ppp::~Ppp()
{
}

bool Native::Interface::VirtualTemplate::Ppp::has_data() const
{
    return accounting.is_set
	|| authorization.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (chap !=  nullptr && chap->has_data())
	|| (ipcp !=  nullptr && ipcp->has_data())
	|| (multilink !=  nullptr && multilink->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation)
	|| is_set(authorization.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (chap !=  nullptr && chap->has_operation())
	|| (ipcp !=  nullptr && ipcp->has_operation())
	|| (multilink !=  nullptr && multilink->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:ppp";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ppp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.operation)) leaf_name_data.push_back(authorization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "chap")
    {
        if(chap == nullptr)
        {
            chap = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Chap>();
        }
        return chap;
    }

    if(child_yang_name == "ipcp")
    {
        if(ipcp == nullptr)
        {
            ipcp = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp>();
        }
        return ipcp;
    }

    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink>();
        }
        return multilink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(chap != nullptr)
    {
        children["chap"] = chap;
    }

    if(ipcp != nullptr)
    {
        children["ipcp"] = ipcp;
    }

    if(multilink != nullptr)
    {
        children["multilink"] = multilink;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ppp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
    if(value_path == "authorization")
    {
        authorization = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Chap::Chap()
    :
    challenge_length{YType::uint8, "challenge-length"},
    hostname{YType::str, "hostname"}
{
    yang_name = "chap"; yang_parent_name = "ppp";
}

Native::Interface::VirtualTemplate::Ppp::Chap::~Chap()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Chap::has_data() const
{
    return challenge_length.is_set
	|| hostname.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Chap::has_operation() const
{
    return is_set(operation)
	|| is_set(challenge_length.operation)
	|| is_set(hostname.operation);
}

std::string Native::Interface::VirtualTemplate::Ppp::Chap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chap";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Chap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Chap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge_length.is_set || is_set(challenge_length.operation)) leaf_name_data.push_back(challenge_length.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Chap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Chap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Chap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "challenge-length")
    {
        challenge_length = value;
    }
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Authentication::Authentication()
    :
    callback{YType::empty, "callback"},
    callin{YType::empty, "callin"},
    callout{YType::empty, "callout"},
    chap{YType::empty, "chap"},
    default_{YType::empty, "default"},
    eap{YType::empty, "eap"},
    list_name{YType::str, "list-name"},
    method{YType::enumeration, "method"},
    ms_chap{YType::empty, "ms-chap"},
    ms_chap_v2{YType::empty, "ms-chap-v2"},
    one_time{YType::empty, "one-time"},
    optional{YType::empty, "optional"},
    pap{YType::empty, "pap"}
{
    yang_name = "authentication"; yang_parent_name = "ppp";
}

Native::Interface::VirtualTemplate::Ppp::Authentication::~Authentication()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Authentication::has_data() const
{
    return callback.is_set
	|| callin.is_set
	|| callout.is_set
	|| chap.is_set
	|| default_.is_set
	|| eap.is_set
	|| list_name.is_set
	|| method.is_set
	|| ms_chap.is_set
	|| ms_chap_v2.is_set
	|| one_time.is_set
	|| optional.is_set
	|| pap.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(callback.operation)
	|| is_set(callin.operation)
	|| is_set(callout.operation)
	|| is_set(chap.operation)
	|| is_set(default_.operation)
	|| is_set(eap.operation)
	|| is_set(list_name.operation)
	|| is_set(method.operation)
	|| is_set(ms_chap.operation)
	|| is_set(ms_chap_v2.operation)
	|| is_set(one_time.operation)
	|| is_set(optional.operation)
	|| is_set(pap.operation);
}

std::string Native::Interface::VirtualTemplate::Ppp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callback.is_set || is_set(callback.operation)) leaf_name_data.push_back(callback.get_name_leafdata());
    if (callin.is_set || is_set(callin.operation)) leaf_name_data.push_back(callin.get_name_leafdata());
    if (callout.is_set || is_set(callout.operation)) leaf_name_data.push_back(callout.get_name_leafdata());
    if (chap.is_set || is_set(chap.operation)) leaf_name_data.push_back(chap.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (eap.is_set || is_set(eap.operation)) leaf_name_data.push_back(eap.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.operation)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (method.is_set || is_set(method.operation)) leaf_name_data.push_back(method.get_name_leafdata());
    if (ms_chap.is_set || is_set(ms_chap.operation)) leaf_name_data.push_back(ms_chap.get_name_leafdata());
    if (ms_chap_v2.is_set || is_set(ms_chap_v2.operation)) leaf_name_data.push_back(ms_chap_v2.get_name_leafdata());
    if (one_time.is_set || is_set(one_time.operation)) leaf_name_data.push_back(one_time.get_name_leafdata());
    if (optional.is_set || is_set(optional.operation)) leaf_name_data.push_back(optional.get_name_leafdata());
    if (pap.is_set || is_set(pap.operation)) leaf_name_data.push_back(pap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callback")
    {
        callback = value;
    }
    if(value_path == "callin")
    {
        callin = value;
    }
    if(value_path == "callout")
    {
        callout = value;
    }
    if(value_path == "chap")
    {
        chap = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "eap")
    {
        eap = value;
    }
    if(value_path == "list-name")
    {
        list_name = value;
    }
    if(value_path == "method")
    {
        method = value;
    }
    if(value_path == "ms-chap")
    {
        ms_chap = value;
    }
    if(value_path == "ms-chap-v2")
    {
        ms_chap_v2 = value;
    }
    if(value_path == "one-time")
    {
        one_time = value;
    }
    if(value_path == "optional")
    {
        optional = value;
    }
    if(value_path == "pap")
    {
        pap = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::Ipcp()
    :
    dns(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns>())
{
    dns->parent = this;

    yang_name = "ipcp"; yang_parent_name = "ppp";
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::~Ipcp()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::has_data() const
{
    return (dns !=  nullptr && dns->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::has_operation() const
{
    return is_set(operation)
	|| (dns !=  nullptr && dns->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Ipcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns>();
        }
        return dns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Ipcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::Dns()
    :
    primary{YType::str, "primary"}
{
    yang_name = "dns"; yang_parent_name = "ipcp";
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::~Dns()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::has_data() const
{
    return primary.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::has_operation() const
{
    return is_set(operation)
	|| is_set(primary.operation);
}

std::string Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary")
    {
        primary = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Multilink()
    :
    group{YType::uint32, "group"}
    	,
    endpoint(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint>())
	,fragment(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment>())
	,links(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links>())
{
    endpoint->parent = this;

    fragment->parent = this;

    links->parent = this;

    yang_name = "multilink"; yang_parent_name = "ppp";
}

Native::Interface::VirtualTemplate::Ppp::Multilink::~Multilink()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::has_data() const
{
    return group.is_set
	|| (endpoint !=  nullptr && endpoint->has_data())
	|| (fragment !=  nullptr && fragment->has_data())
	|| (links !=  nullptr && links->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation)
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (fragment !=  nullptr && fragment->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Multilink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multilink' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "fragment")
    {
        if(fragment == nullptr)
        {
            fragment = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment>();
        }
        return fragment;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(endpoint != nullptr)
    {
        children["endpoint"] = endpoint;
    }

    if(fragment != nullptr)
    {
        children["fragment"] = fragment;
    }

    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Links()
    :
    minimum(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum>())
{
    minimum->parent = this;

    yang_name = "links"; yang_parent_name = "multilink";
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::~Links()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::has_data() const
{
    return (minimum !=  nullptr && minimum->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::has_operation() const
{
    return is_set(operation)
	|| (minimum !=  nullptr && minimum->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Links' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum")
    {
        if(minimum == nullptr)
        {
            minimum = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum>();
        }
        return minimum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimum != nullptr)
    {
        children["minimum"] = minimum;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Links::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::Minimum()
    :
    mandatory{YType::empty, "mandatory"},
    minimum_value{YType::uint8, "minimum-value"}
{
    yang_name = "minimum"; yang_parent_name = "links";
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::~Minimum()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::has_data() const
{
    return mandatory.is_set
	|| minimum_value.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::has_operation() const
{
    return is_set(operation)
	|| is_set(mandatory.operation)
	|| is_set(minimum_value.operation);
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minimum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mandatory.is_set || is_set(mandatory.operation)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (minimum_value.is_set || is_set(minimum_value.operation)) leaf_name_data.push_back(minimum_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mandatory")
    {
        mandatory = value;
    }
    if(value_path == "minimum-value")
    {
        minimum_value = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::Endpoint()
    :
    string{YType::str, "string"}
{
    yang_name = "endpoint"; yang_parent_name = "multilink";
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::~Endpoint()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::has_data() const
{
    return string.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(string.operation);
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Endpoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Fragment()
    :
    delay(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay>())
{
    delay->parent = this;

    yang_name = "fragment"; yang_parent_name = "multilink";
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::~Fragment()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragment";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fragment' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::Delay()
    :
    additional_delay_value{YType::uint16, "additional-delay-value"},
    delay_value{YType::uint16, "delay-value"}
{
    yang_name = "delay"; yang_parent_name = "fragment";
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::~Delay()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::has_data() const
{
    return additional_delay_value.is_set
	|| delay_value.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(additional_delay_value.operation)
	|| is_set(delay_value.operation);
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_delay_value.is_set || is_set(additional_delay_value.operation)) leaf_name_data.push_back(additional_delay_value.get_name_leafdata());
    if (delay_value.is_set || is_set(delay_value.operation)) leaf_name_data.push_back(delay_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-delay-value")
    {
        additional_delay_value = value;
    }
    if(value_path == "delay-value")
    {
        delay_value = value;
    }
}

Native::Interface::VirtualTemplate::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{
    yang_name = "mab"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::Mab::~Mab()
{
}

bool Native::Interface::VirtualTemplate::Mab::has_data() const
{
    return eap.is_set;
}

bool Native::Interface::VirtualTemplate::Mab::has_operation() const
{
    return is_set(operation)
	|| is_set(eap.operation);
}

std::string Native::Interface::VirtualTemplate::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::Mab::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mab' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.operation)) leaf_name_data.push_back(eap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Mab::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eap")
    {
        eap = value;
    }
}

Native::Interface::VirtualTemplate::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{
    yang_name = "zone-member"; yang_parent_name = "Virtual-Template";
}

Native::Interface::VirtualTemplate::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_data() const
{
    return security.is_set;
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_operation() const
{
    return is_set(operation)
	|| is_set(security.operation);
}

std::string Native::Interface::VirtualTemplate::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";

    return path_buffer.str();

}

const EntityPath Native::Interface::VirtualTemplate::ZoneMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ZoneMember' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.operation)) leaf_name_data.push_back(security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::ZoneMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "security")
    {
        security = value;
    }
}

Native::Interface::Virtualportgroup::Virtualportgroup()
    :
    name{YType::uint16, "name"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::Virtualportgroup::AccessSession>())
	,arp(std::make_shared<Native::Interface::Virtualportgroup::Arp>())
	,backup(std::make_shared<Native::Interface::Virtualportgroup::Backup>())
	,bandwidth(std::make_shared<Native::Interface::Virtualportgroup::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::Virtualportgroup::Bfd>())
	,carrier_delay(std::make_shared<Native::Interface::Virtualportgroup::CarrierDelay>())
	,cemoudp(std::make_shared<Native::Interface::Virtualportgroup::Cemoudp>())
	,channel_group(std::make_shared<Native::Interface::Virtualportgroup::ChannelGroup>())
	,cts(std::make_shared<Native::Interface::Virtualportgroup::Cts>())
	,cws_tunnel(std::make_shared<Native::Interface::Virtualportgroup::CwsTunnel>())
	,dampening(nullptr) // presence node
	,domain(std::make_shared<Native::Interface::Virtualportgroup::Domain>())
	,encapsulation(std::make_shared<Native::Interface::Virtualportgroup::Encapsulation>())
	,ethernet(std::make_shared<Native::Interface::Virtualportgroup::Ethernet>())
	,fair_queue(std::make_shared<Native::Interface::Virtualportgroup::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::Virtualportgroup::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::Virtualportgroup::Flowcontrol>())
	,hold_queue(std::make_shared<Native::Interface::Virtualportgroup::HoldQueue>())
	,interface_qos(std::make_shared<Native::Interface::Virtualportgroup::Interface_Qos>())
	,ip(std::make_shared<Native::Interface::Virtualportgroup::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::Virtualportgroup::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::Virtualportgroup::Ipv6>())
	,isis(std::make_shared<Native::Interface::Virtualportgroup::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::Virtualportgroup::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,logging(std::make_shared<Native::Interface::Virtualportgroup::Logging>())
	,mab(nullptr) // presence node
	,mdix(std::make_shared<Native::Interface::Virtualportgroup::Mdix>())
	,mop(std::make_shared<Native::Interface::Virtualportgroup::Mop>())
	,mpls(std::make_shared<Native::Interface::Virtualportgroup::Mpls>())
	,negotiation(std::make_shared<Native::Interface::Virtualportgroup::Negotiation>())
	,peer(std::make_shared<Native::Interface::Virtualportgroup::Peer>())
	,plim(std::make_shared<Native::Interface::Virtualportgroup::Plim>())
	,pm_path(std::make_shared<Native::Interface::Virtualportgroup::PmPath>())
	,pppoe(std::make_shared<Native::Interface::Virtualportgroup::Pppoe>())
	,priority_queue(std::make_shared<Native::Interface::Virtualportgroup::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::Virtualportgroup::RcvQueue>())
	,service(std::make_shared<Native::Interface::Virtualportgroup::Service>())
	,service_policy(std::make_shared<Native::Interface::Virtualportgroup::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::Virtualportgroup::Snmp>())
	,speed(std::make_shared<Native::Interface::Virtualportgroup::Speed>())
	,standby(std::make_shared<Native::Interface::Virtualportgroup::Standby>())
	,storm_control(std::make_shared<Native::Interface::Virtualportgroup::StormControl>())
	,switchport(std::make_shared<Native::Interface::Virtualportgroup::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::Virtualportgroup::SwitchportConf>())
	,synchronous(std::make_shared<Native::Interface::Virtualportgroup::Synchronous>())
	,trust(std::make_shared<Native::Interface::Virtualportgroup::Trust>())
	,utd(std::make_shared<Native::Interface::Virtualportgroup::Utd>())
	,vrf(std::make_shared<Native::Interface::Virtualportgroup::Vrf>())
{
    access_session->parent = this;

    arp->parent = this;

    backup->parent = this;

    bandwidth->parent = this;

    bfd->parent = this;

    carrier_delay->parent = this;

    cemoudp->parent = this;

    channel_group->parent = this;

    cts->parent = this;

    cws_tunnel->parent = this;

    domain->parent = this;

    encapsulation->parent = this;

    ethernet->parent = this;

    fair_queue->parent = this;

    fair_queue_conf->parent = this;

    flowcontrol->parent = this;

    hold_queue->parent = this;

    interface_qos->parent = this;

    ip->parent = this;

    ip_vrf->parent = this;

    ipv6->parent = this;

    isis->parent = this;

    keepalive_settings->parent = this;

    logging->parent = this;

    mdix->parent = this;

    mop->parent = this;

    mpls->parent = this;

    negotiation->parent = this;

    peer->parent = this;

    plim->parent = this;

    pm_path->parent = this;

    pppoe->parent = this;

    priority_queue->parent = this;

    rcv_queue->parent = this;

    service->parent = this;

    service_policy->parent = this;

    snmp->parent = this;

    speed->parent = this;

    standby->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    switchport_conf->parent = this;

    synchronous->parent = this;

    trust->parent = this;

    utd->parent = this;

    vrf->parent = this;

    yang_name = "VirtualPortGroup"; yang_parent_name = "interface";
}

Native::Interface::Virtualportgroup::~Virtualportgroup()
{
}

bool Native::Interface::Virtualportgroup::has_data() const
{
    return name.is_set
	|| channel_protocol.is_set
	|| delay.is_set
	|| description.is_set
	|| duplex.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (hold_queue !=  nullptr && hold_queue->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Virtualportgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(channel_protocol.operation)
	|| is_set(delay.operation)
	|| is_set(description.operation)
	|| is_set(duplex.operation)
	|| is_set(if_state.operation)
	|| is_set(keepalive.operation)
	|| is_set(load_interval.operation)
	|| is_set(max_reserved_bandwidth.operation)
	|| is_set(mtu.operation)
	|| is_set(service_insertion.operation)
	|| is_set(shutdown.operation)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (hold_queue !=  nullptr && hold_queue->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Virtualportgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VirtualPortGroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.operation)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.operation)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.operation)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.operation)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::Virtualportgroup::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Virtualportgroup::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Virtualportgroup::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Virtualportgroup::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Virtualportgroup::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::Virtualportgroup::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::Virtualportgroup::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::Virtualportgroup::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::Virtualportgroup::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::Virtualportgroup::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::Virtualportgroup::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::Virtualportgroup::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Virtualportgroup::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Virtualportgroup::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::Virtualportgroup::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::Virtualportgroup::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::Virtualportgroup::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        if(hold_queue == nullptr)
        {
            hold_queue = std::make_shared<Native::Interface::Virtualportgroup::HoldQueue>();
        }
        return hold_queue;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::Virtualportgroup::Interface_Qos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Virtualportgroup::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Virtualportgroup::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Virtualportgroup::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Virtualportgroup::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Virtualportgroup::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::Virtualportgroup::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::Virtualportgroup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::Virtualportgroup::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::Virtualportgroup::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::Virtualportgroup::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Virtualportgroup::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::Virtualportgroup::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Virtualportgroup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::Virtualportgroup::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::Virtualportgroup::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::Virtualportgroup::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::Virtualportgroup::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::Virtualportgroup::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::Virtualportgroup::Service>();
        }
        return service;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Virtualportgroup::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::Virtualportgroup::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::Virtualportgroup::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::Virtualportgroup::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::Virtualportgroup::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::Virtualportgroup::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::Virtualportgroup::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::Virtualportgroup::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Virtualportgroup::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::Virtualportgroup::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Virtualportgroup::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(channel_group != nullptr)
    {
        children["channel-group"] = channel_group;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(hold_queue != nullptr)
    {
        children["hold-queue"] = hold_queue;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(negotiation != nullptr)
    {
        children["negotiation"] = negotiation;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(plim != nullptr)
    {
        children["plim"] = plim;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(speed != nullptr)
    {
        children["speed"] = speed;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Virtualportgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "if-state")
    {
        if_state = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::Virtualportgroup::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "switchport-conf"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::Virtualportgroup::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Virtualportgroup::SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::Virtualportgroup::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::SwitchportConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchportConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.operation)) leaf_name_data.push_back(switchport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::Virtualportgroup::Switchport::Switchport()
{
    yang_name = "switchport"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Switchport::~Switchport()
{
}

bool Native::Interface::Virtualportgroup::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Virtualportgroup::Switchport::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Virtualportgroup::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switchport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Switchport::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "arp"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Arp::~Arp()
{
}

bool Native::Interface::Virtualportgroup::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Virtualportgroup::Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Virtualportgroup::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Virtualportgroup::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Virtualportgroup::Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "backup"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Backup::~Backup()
{
}

bool Native::Interface::Virtualportgroup::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Virtualportgroup::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Virtualportgroup::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Virtualportgroup::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Virtualportgroup::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Virtualportgroup::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Virtualportgroup::Backup::Delay::~Delay()
{
}

bool Native::Interface::Virtualportgroup::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Virtualportgroup::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::Virtualportgroup::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.operation)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup";
}

Native::Interface::Virtualportgroup::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::Virtualportgroup::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Interface::Virtualportgroup::Backup::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Virtualportgroup::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "backup";
}

Native::Interface::Virtualportgroup::Backup::Load::~Load()
{
}

bool Native::Interface::Virtualportgroup::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Virtualportgroup::Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::Virtualportgroup::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Backup::Load::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Load' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.operation)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.operation)) leaf_name_data.push_back(kickout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Backup::Load::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kickin")
    {
        kickin = value;
    }
    if(value_path == "kickout")
    {
        kickout = value;
    }
}

Native::Interface::Virtualportgroup::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Virtualportgroup::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::Virtualportgroup::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Virtualportgroup::Cemoudp::has_operation() const
{
    return is_set(operation)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Virtualportgroup::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Cemoudp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cemoudp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Virtualportgroup::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Virtualportgroup::Cemoudp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{
    yang_name = "reserve"; yang_parent_name = "cemoudp";
}

Native::Interface::Virtualportgroup::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Virtualportgroup::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Virtualportgroup::Cemoudp::Reserve::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation);
}

std::string Native::Interface::Virtualportgroup::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Cemoudp::Reserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reserve' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Cemoudp::Reserve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
}

Native::Interface::Virtualportgroup::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Virtualportgroup::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Virtualportgroup::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Virtualportgroup::CwsTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Virtualportgroup::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::CwsTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CwsTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Virtualportgroup::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Virtualportgroup::CwsTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Virtualportgroup::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{
    yang_name = "out"; yang_parent_name = "cws-tunnel";
}

Native::Interface::Virtualportgroup::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Virtualportgroup::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Virtualportgroup::CwsTunnel::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_number.operation);
}

std::string Native::Interface::Virtualportgroup::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::CwsTunnel::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.operation)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::CwsTunnel::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
    }
}

Native::Interface::Virtualportgroup::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;

    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::Virtualportgroup::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Virtualportgroup::L2ProtocolTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Virtualportgroup::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2ProtocolTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Virtualportgroup::L2ProtocolTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel";
}

Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DropThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel";
}

Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShutdownThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Virtualportgroup::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;

    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Virtualportgroup::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Virtualportgroup::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Virtualportgroup::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Virtualportgroup::Encapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    return children;
}

void Native::Interface::Virtualportgroup::Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1Q"; yang_parent_name = "encapsulation";
}

Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(native.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.operation)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "native")
    {
        native = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Virtualportgroup::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "isl"; yang_parent_name = "encapsulation";
}

Native::Interface::Virtualportgroup::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Virtualportgroup::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Virtualportgroup::Encapsulation::Isl::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Virtualportgroup::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Encapsulation::Isl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Encapsulation::Isl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Virtualportgroup::Encapsulation::Ppp::Ppp()
{
    yang_name = "ppp"; yang_parent_name = "encapsulation";
}

Native::Interface::Virtualportgroup::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Virtualportgroup::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Virtualportgroup::Encapsulation::Ppp::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Virtualportgroup::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Encapsulation::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ppp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Encapsulation::Ppp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::Encapsulation::Slip::Slip()
{
    yang_name = "slip"; yang_parent_name = "encapsulation";
}

Native::Interface::Virtualportgroup::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::Virtualportgroup::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Virtualportgroup::Encapsulation::Slip::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Virtualportgroup::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Encapsulation::Slip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Encapsulation::Slip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{
    yang_name = "frame-relay"; yang_parent_name = "encapsulation";
}

Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf.operation);
}

std::string Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameRelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Encapsulation::FrameRelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf")
    {
        ietf = value;
    }
}

Native::Interface::Virtualportgroup::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{
    yang_name = "fair-queue-conf"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::Virtualportgroup::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Virtualportgroup::FairQueueConf::has_operation() const
{
    return is_set(operation)
	|| is_set(fair_queue.operation);
}

std::string Native::Interface::Virtualportgroup::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::FairQueueConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueueConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.operation)) leaf_name_data.push_back(fair_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::FairQueueConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
    }
}

Native::Interface::Virtualportgroup::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{
    yang_name = "fair-queue"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::FairQueue::~FairQueue()
{
}

bool Native::Interface::Virtualportgroup::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Virtualportgroup::FairQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(incomplete.operation);
}

std::string Native::Interface::Virtualportgroup::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::FairQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.operation)) leaf_name_data.push_back(incomplete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::FairQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
    }
}

Native::Interface::Virtualportgroup::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{
    yang_name = "flowcontrol"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::Virtualportgroup::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Virtualportgroup::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(send.operation);
}

std::string Native::Interface::Virtualportgroup::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.operation)) leaf_name_data.push_back(send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "send")
    {
        send = value;
    }
}

Native::Interface::Virtualportgroup::Isis::Isis()
{
    yang_name = "isis"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Isis::~Isis()
{
}

bool Native::Interface::Virtualportgroup::Isis::has_data() const
{
    return false;
}

bool Native::Interface::Virtualportgroup::Isis::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Virtualportgroup::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Isis::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{
    yang_name = "keepalive-settings"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Virtualportgroup::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Virtualportgroup::KeepaliveSettings::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Virtualportgroup::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::KeepaliveSettings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepaliveSettings' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Virtualportgroup::KeepaliveSettings::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{
    yang_name = "keepalive"; yang_parent_name = "keepalive-settings";
}

Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(period.operation)
	|| is_set(retries.operation);
}

std::string Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "period")
    {
        period = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
}

Native::Interface::Virtualportgroup::Bfd::Bfd()
    :
    echo{YType::boolean, "Cisco-IOS-XE-bfd:echo"},
    template_{YType::str, "Cisco-IOS-XE-bfd:template"}
    	,
    interval(std::make_shared<Native::Interface::Virtualportgroup::Bfd::Interval>())
{
    interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "VirtualPortGroup";
}

Native::Interface::Virtualportgroup::Bfd::~Bfd()
{
}

bool Native::Interface::Virtualportgroup::Bfd::has_data() const
{
    return echo.is_set
	|| template_.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Interface::Virtualportgroup::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(echo.operation)
	|| is_set(template_.operation)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Interface::Virtualportgroup::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.operation)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Interface::Virtualportgroup::Bfd::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Interface::Virtualportgroup::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "echo")
    {
        echo = value;
    }
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::Interface::Virtualportgroup::Bfd::Interval::Interval()
    :
    min_rx{YType::uint16, "min_rx"},
    msecs{YType::uint16, "msecs"},
    multiplier{YType::uint8, "multiplier"}
{
    yang_name = "interval"; yang_parent_name = "bfd";
}

Native::Interface::Virtualportgroup::Bfd::Interval::~Interval()
{
}

bool Native::Interface::Virtualportgroup::Bfd::Interval::has_data() const
{
    return min_rx.is_set
	|| msecs.is_set
	|| multiplier.is_set;
}

bool Native::Interface::Virtualportgroup::Bfd::Interval::has_operation() const
{
    return is_set(operation)
	|| is_set(min_rx.operation)
	|| is_set(msecs.operation)
	|| is_set(multiplier.operation);
}

std::string Native::Interface::Virtualportgroup::Bfd::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Virtualportgroup::Bfd::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_rx.is_set || is_set(min_rx.operation)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (msecs.is_set || is_set(msecs.operation)) leaf_name_data.push_back(msecs.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Virtualportgroup::Bfd::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Virtualportgroup::Bfd::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Virtualportgroup::Bfd::Interval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min_rx")
    {
        min_rx = value;
    }
    if(value_path == "msecs")
    {
        msecs = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::ViolationEnum::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::ProtocolEnum::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::ProtocolEnum::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::SnoopingEnum::enable {0, "enable"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::UdpEnum::ip {0, "ip"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::UdpEnum::multipoint {1, "multipoint"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::GreEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::GreEnum::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::MetricEnum::igp {0, "igp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::MetricEnum::te {1, "te"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBitEnum::clear {0, "clear"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBitEnum::copy {1, "copy"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBitEnum::set {2, "set"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::FragmentationEnum::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::FragmentationEnum::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::AccountingEnum::default_ {0, "default"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::AuthorizationEnum::default_ {0, "default"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::MethodEnum::chap {0, "chap"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::MethodEnum::eap {1, "eap"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::MethodEnum::ms_chap {2, "ms-chap"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::MethodEnum::ms_chap_v2 {3, "ms-chap-v2"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::MethodEnum::pap {4, "pap"};

const Enum::YLeaf Native::Interface::Virtualportgroup::IfStateEnum::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Virtualportgroup::ServiceInsertionEnum::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Virtualportgroup::ChannelProtocolEnum::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::Virtualportgroup::ChannelProtocolEnum::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::Virtualportgroup::DuplexEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::Virtualportgroup::DuplexEnum::full {1, "full"};
const Enum::YLeaf Native::Interface::Virtualportgroup::DuplexEnum::half {2, "half"};

const Enum::YLeaf Native::Interface::Virtualportgroup::Backup::Delay::FailureEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Virtualportgroup::Backup::Delay::SecondaryDisableEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Virtualportgroup::Backup::Load::KickinEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Virtualportgroup::Backup::Load::KickoutEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Virtualportgroup::Flowcontrol::ReceiveEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Virtualportgroup::Flowcontrol::ReceiveEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Virtualportgroup::Flowcontrol::ReceiveEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Virtualportgroup::Flowcontrol::SendEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Virtualportgroup::Flowcontrol::SendEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Virtualportgroup::Flowcontrol::SendEnum::on {2, "on"};


}
}

